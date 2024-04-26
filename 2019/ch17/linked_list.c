/*
 *
 *   File:
 *      linked_list.c
 *
 *   Synopsis:
 *      Linked list implementation. Nodes can only contain doubles!!!
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200705  Original.
 *
 */

#include "linked_list.h"

#include <stdlib.h>
#include <stdio.h>

double_cons fake_cons(double car, double_cons *cdr) {
  double_cons result = {car, cdr};
  return result;
}

double_list cons(double car, double_list cdr) {
  double_cons *p = malloc(sizeof(double_cons));

  if ( p == NULL ) {
    fprintf(stderr, "Could not create cons.\n");
    exit(EXIT_FAILURE);
  } else {
    p->car = car;
    p->cdr = cdr;

    return p;
  }
}

double car(double_list l) {
  if ( l == NULL ) {
    fprintf(stderr, "List is empty.\n");
    exit(EXIT_FAILURE);
  } else {
    return l->car;
  }
}

double_list cdr(double_list l) {
  if ( l == NULL ) {
    fprintf(stderr, "List is empty.\n");
    exit(EXIT_FAILURE);
  } else {
    return l->cdr;
  }
}

double cadr(double_list l) {
  if ( l == NULL ) {
    fprintf(stderr, "List is empty.\n");
    exit(EXIT_FAILURE);
  } else {
    return car(l->cdr); // !
  }
}

double caddr(double_list l) {
  if ( l == NULL ) {
    fprintf(stderr, "List is empty.\n");
    exit(EXIT_FAILURE);
  } else {
    return cadr(l->cdr); // !
  }
}

double_list member(double obj, double_list l) {
  while ( l != NULL  &&  l->car != obj ) {
    l = l->cdr;
  }

  return l;
}

void print_list(double_list l) {
  printf("(");

  if ( l != NULL ) {
    printf("%f", l->car);
    /* printf("%f [%p]", l->car, l); */

    l = l->cdr;
    while ( l != NULL ) {
      printf(", %f", l->car);
      /* printf(", %f [%p]", l->car, l); */
      l = l->cdr;
    }
  }

  printf(")");
}

/*
 *    Delete target element from list.
 *    Return head of new list. Works even in case where single-element list holds the target.
 */
double_list delete(double target, double_list l) {
  double_list curr = l, prev = NULL;

  while ( curr != NULL  &&  curr->car != target ) {
    prev = curr;
    curr = curr->cdr;
  }

  if ( curr == NULL ) {
    return l;
  } else if ( prev == NULL ) {
    l = l->cdr;
  } else {
    prev->cdr = curr->cdr;
  }

  free(curr);
  return l;
}

// delete_n  int count

/*
 *    Delete target element from list. Perform list surgery to remove the node in place.
 *    This strategy does not work on single-element lists. Caller still points to a node.
 */
void delete2(double target, double_list l) { // Lispy!
  double_list curr = l, prev = NULL;

  while ( curr != NULL ) {
    if ( curr->car == target ) {
      if ( curr->cdr == NULL ) {
        if ( prev == NULL ) {
          fprintf(stderr, "Cannot delete entire single-element list.\n");
          exit(EXIT_FAILURE);
        } else {
          prev->cdr = NULL;
          free(curr);
        }
      } else {
        double_list old = curr->cdr;

        curr->car = curr->cdr->car; // Cannibalize next node then remove it.
        curr->cdr = curr->cdr->cdr;

        free(old);
      }

      return;
    }
    prev = curr;
    curr = curr->cdr;
  }
}

/*
 *    Same as delete2() but while loop restructured...
 */
void delete3(double target, double_list l) {
  double_list curr = l, prev = NULL;

  while ( curr != NULL  &&  curr->car != target ) {
    prev = curr;
    curr = curr->cdr;
  }

  if ( curr != NULL  &&  curr->car == target ) { // 2nd clause unnecessary?? Only way curr is not NULL...
    if ( curr->cdr == NULL ) {
      if ( prev == NULL ) {
        fprintf(stderr, "Cannot delete entire single-element list.\n");
        exit(EXIT_FAILURE);
      } else {
        prev->cdr = NULL;
        free(curr);
      }
    } else {
      double_list old = curr->cdr;

      curr->car = curr->cdr->car;
      curr->cdr = curr->cdr->cdr;
      
      free(old);
    }
  }
}

/*
 *    Delete element in place. Correctly modify the list even for single-element case.
 *
 *    Note: Only delete() and delete4() can handle the case where the input is a single-element list.
 *          And since Lisp cannot manipulate raw pointers, delete4() is not an option. So in Lisp
 *          it is necessary to return the new value (in functional style!) as with delete() above.
 */
void delete4(double target, double_list *l) {
  double_list curr = *l, prev = NULL;

  while ( curr != NULL  &&  curr->car != target ) {
    prev = curr;
    curr = curr->cdr;
  }

  if ( curr != NULL  &&  curr->car == target ) { // 2nd clause unnecessary?? Only way curr is not NULL...
    if ( curr->cdr == NULL ) {
      if ( prev == NULL ) {
        *l = NULL; // First node is last node! Single-element list goes away...
      } else {
        prev->cdr = NULL;
      }

      free(curr);
    } else {
      double_list old = curr->cdr;

      curr->car = curr->cdr->car;
      curr->cdr = curr->cdr->cdr;
      
      free(old);
    }
  }
}

/*
 *    Insert elt into ordered list at the appropriate location.
 *    Returns pointer to the new list (Necessary in case elt added to head of list.)
 */
double_list insert(double elt, double_list l) {
  double_list curr = l, prev = NULL;

  while ( curr != NULL  &&  elt > curr->car ) {
    prev = curr;
    curr = curr->cdr;
  }

  if ( curr != NULL  &&  elt == curr->car ) {
    // Already present...
    return l;
  } else {
    double_list new_cons = cons(elt, curr);
    
    if ( prev == NULL ) {
      return new_cons;
    } else {
      prev->cdr = new_cons;
      return l;
    }
  }
}

/*
 *    Insert elt into ordered list at the appropriate location.
 *    Modifies the list in place even when elt added to head of list.
 */
//void insert2(double elt, double_cons **l) {
void insert2(double elt, double_list *l) { // Compiler doesn't care either way!!
  double_list curr = *l, prev = NULL;

  while ( curr != NULL  &&  elt > curr->car ) {
    prev = curr;
    curr = curr->cdr;
  }

  if ( curr == NULL  ||  elt != curr->car ) {
    double_list new_cons = cons(elt, curr);
    
    if ( prev == NULL ) {
      *l = new_cons;
    } else {
      prev->cdr = new_cons;
    }
  }
}

void free_list(double_list l) {
  double_list curr = l, prev = NULL;

  while ( curr != NULL ) {
    prev = curr;
    curr = curr->cdr;
    free(prev);
  }
}
