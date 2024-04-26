/*
 *
 *   File:
 *      inventory3.c
 *
 *   Synopsis:
 *      Redo of chapter 16 version using linked list rather than array.
 *      Different kind of linked list!
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200611  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "readline.h"
/* #include "cons.h" */

#define NAME_LENGTH 25

typedef struct part part;
struct part {
  int number;
  char name[NAME_LENGTH+1];
  int on_hand;
};

typedef struct part_cons *parts_list; 
typedef struct part_cons { 
  part *car;
  parts_list cdr;
 } part_cons;

/* DefCons(part); */
/* struct cons { */
/*   struct part *car; */
/*   /\* struct part car; *\/ */
/*   struct cons *cdr; */
/* }; */

parts_list inventory = NULL;

part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {
  char code;

  while ( true ) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    
    while ( getchar() != '\n' ) {}

    switch ( code ) {
      case 'i': insert();
                break;
      case 's': search();
                break;
      case 'u': update();
                break;
      case 'p': print();
                break;
      case 'q': exit(EXIT_SUCCESS);
      default:  printf("Illegal code\n");
    }
    
    printf("\n");
  }
}

part *find_part(int number) {
  parts_list l;

  for (l = inventory; l != NULL  &&  number > l->car->number; l = l->cdr) {}

  if ( l != NULL  &&  number == l->car->number ) {
    return l->car;
  } else {
    return NULL;
  }
}

void insert(void) {
  parts_list current, previous;
  part_cons *new_cons = malloc(sizeof(part_cons));
  if ( new_cons == NULL ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  part *new_part = malloc(sizeof(part));
  if ( new_part == NULL ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &new_part->number);

  for (current = inventory, previous = NULL;
       current != NULL  &&  new_part->number > current->car->number;
       previous = current, current = current->cdr) {}

  if ( current != NULL  &&  new_part->number == current->car->number ) {
    printf("Part already exists.\n");
    free(new_part);
    return;
  }

  printf("Enter part name: ");
  readline(new_part->name, NAME_LENGTH);

  printf("Enter quantity on hand: ");
  scanf("%d", &new_part->on_hand);

  new_cons->car = new_part;
  new_cons->cdr = current;

  if ( previous == NULL ) {
    inventory = new_cons;
  } else {
    previous->cdr = new_cons;
  }
}

void print_parts_list(parts_list l) {
  if ( l != NULL ) {
    part *p = l->car;
    printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
    print_parts_list(l->cdr);
  }
}

void print(void) {
  printf("Part Number   Part Name                  Quantity on Hand\n");
  /* print_parts_list(inventory); */

  for (parts_list l = inventory; l != NULL; l = l->cdr) {
    part *p = l->car;
    printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
  }
}

void search(void) {
  printf("Enter part number: ");
  int number;
  scanf("%d", &number);
  
  part *p = find_part(number);

  if ( p == NULL ) {
    printf("Part not found.\n");
  } else {
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
  }
}

void update(void) {
  printf("Enter part number: ");
  int number;
  scanf("%d", &number);
  
  part *p = find_part(number);

  if ( p == NULL ) {
    printf("Part not found.\n");
  } else {
    printf("Enter change in quantity in hand: ");
    int change; // delta
    scanf("%d", &change);
    p->on_hand += change;
  }
}
