/*
 *
 *   File:
 *      linked_list.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200615  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
  {
    double_cons c = fake_cons(3.0, NULL);
    /* struct double_cons c = fake_cons(3.0, NULL); */
    printf("%f\n", c.car);

    c = fake_cons(2.0, &c);
    printf("%f\n", c.car);
    printf("%f\n", c.cdr->car);

    c = fake_cons(1.0, &c);
    printf("%f\n", c.car);
    printf("%f\n", c.cdr->car);

  
    double_cons c1 = {3.0, NULL};
    /* struct double_cons c1 = {3.0, NULL}; */
    printf("%f\n", c1.car);

    c1 = (double_cons) {2.0, &c};
    /* c1 = (struct double_cons) {2.0, &c}; */
    printf("%f\n", c1.car);
    printf("%f\n", c1.cdr->car);
  
    double_cons *p;
    /* struct double_cons *p; */
    c = fake_cons(1.0, NULL);
    p = &c;
    printf("%p\n", p);

    c = fake_cons(2.0, NULL);
    p = &c;
    printf("%p\n", p);

    c = (double_cons) {3.0, NULL};
    /* c = (struct double_cons) {3.0, NULL}; */
    p = &c;
    printf("%p\n", p);


    //    Both nonsense
    /* struct double_cons c2 = fake_cons(1.0, fake_cons(2.0, fake_cons(3.0, NULL))); */ //Wrong type
    /* struct double_cons c2 = fake_cons(1.0, &(fake_cons(2.0, &(fake_cons(3.0, NULL))))); */ //Must be lvalue
  }

  {
    double_cons c3 = fake_cons(3.0, NULL);
    double_cons c2 = fake_cons(2.0, &c3);
    double_cons c1 = fake_cons(1.0, &c2);
    /* struct double_cons c3 = fake_cons(3.0, NULL); */
    /* struct double_cons c2 = fake_cons(2.0, &c3); */
    /* struct double_cons c1 = fake_cons(1.0, &c2); */

    printf("%f\n", c1.car);
    printf("%f\n", c1.cdr->car);
    printf("%f\n", c1.cdr->cdr->car);

    printf("\n\n\n");

    double_list l = cons(3.0, NULL);
    printf("%f\n", l->car);

    printf("\n");

    l = cons(2.0, l);
    printf("%f\n", l->car);
    printf("%f\n", l->cdr->car);

    printf("\n");

    l = cons(1.0, l);
    printf("%f\n", car(l));
    printf("%f\n", cadr(l));
    printf("%f\n", caddr(l));

    print_list(cdr(l));
    printf("\n");
    print_list(cdr(cdr(l)));
    printf("\n");
    print_list(cdr(cdr(cdr(l))));
    printf("\n");

    printf("CADR: %f\n", car(cdr(l)));
    printf("CADDR: %f\n", car(cdr(cdr(l))));

    free_list(l);
  }

  {
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(4.0, l);
    l = cons(3.0, l);
    l = cons(2.0, l);
    l = cons(1.0, l);

    print_list(l);
    printf("\n");

    double_list l1 = member(5.0, l);

    print_list(l1);
    printf("\n");

    print_list(member(2.0, l));
    printf("\n");

    printf("Delete...\n");
    l = delete(2.0, l);
    print_list(l);
    printf("\n");

    l = delete(1.0, l);
    print_list(l);
    printf("\n");

    l = delete(5.0, l);
    print_list(l);
    printf("\n");

    l = delete(6.0, l);
    print_list(l);
    printf("\n");

    l = delete(4.0, l);
    print_list(l);
    printf("\n");

    l = delete(3.0, l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  {
    printf("Delete 2...\n");
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(4.0, l);
    l = cons(3.0, l);
    l = cons(2.0, l);
    l = cons(1.0, l);

    print_list(l);
    printf("\n");

    delete2(1.0, l);
    print_list(l);
    printf("\n");

    delete2(4.0, l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  {
    printf("Delete 3...\n");
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(4.0, l);
    l = cons(3.0, l);
    l = cons(2.0, l);
    l = cons(1.0, l);

    print_list(l);
    printf("\n");

    delete3(1.0, l);
    print_list(l);
    printf("\n");

    delete3(4.0, l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  {
    printf("Delete 4...\n");
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(4.0, l);
    l = cons(3.0, l);
    l = cons(2.0, l);
    l = cons(1.0, l);

    print_list(l);
    printf("\n");

    delete4(1.0, &l);
    print_list(l);
    printf("\n");

    delete4(4.0, &l);
    print_list(l);
    printf("\n");

    delete4(4.0, &l);
    print_list(l);
    printf("\n");

    delete4(2.0, &l);
    print_list(l);
    printf("\n");

    delete4(3.0, &l);
    print_list(l);
    printf("\n");

    delete4(5.0, &l);
    print_list(l);
    printf("\n");

    delete4(6.0, &l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  {
    printf("Insert...\n");
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(2.0, l);

    print_list(l);
    printf("\n");
    
    l = insert(3.0, l);
    print_list(l);
    printf("\n");

    l = insert(1.0, l);
    print_list(l);
    printf("\n");

    l = insert(4.0, l);
    print_list(l);
    printf("\n");

    l = insert(4.0, l);
    print_list(l);
    printf("\n");

    l = insert(7.0, l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  {
    printf("Insert 2...\n");
    double_list l = cons(6.0, NULL);
    l = cons(5.0, l);
    l = cons(2.0, l);

    print_list(l);
    printf("\n");
    
    insert2(3.0, &l);
    print_list(l);
    printf("\n");

    insert2(1.0, &l);
    print_list(l);
    printf("\n");

    insert2(4.0, &l);
    print_list(l);
    printf("\n");

    insert2(4.0, &l);
    print_list(l);
    printf("\n");

    insert2(7.0, &l);
    print_list(l);
    printf("\n");

    free_list(l);
  }

  /* { */
  /*   typedef struct int_cons *int_list;  */
  /*   struct int_cons {  */
  /*     int car;  */
  /*     int_list cdr; */
  /*   }; */

  /*   int_cons c = {3, NULL}; */ // <--- Wrong!
  /*   struct int_cons c = {3, NULL}; */

  /* } */

  exit(EXIT_SUCCESS);
}
