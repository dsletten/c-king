/*
 *
 *   File:
 *      inventory2.c
 *
 *   Synopsis:
 *      Redo of chapter 16 version using linked list rather than array.
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

#define NAME_LENGTH 25

struct part {
  int number;
  char name[NAME_LENGTH+1];
  int on_hand;
  struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int number);
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

struct part *find_part(int number) {
  struct part *p;

  for (p = inventory; p != NULL  &&  number > p->number; p = p->next) {}

  if ( p != NULL  &&  number == p->number ) {
    return p;
  } else {
    return NULL;
  }
}

void insert(void) {
  struct part *current, *previous;
  
  struct part *new_part = malloc(sizeof(struct part));
  if ( new_part == NULL ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &new_part->number);

  for (current = inventory, previous = NULL;
       current != NULL  &&  new_part->number > current->number;
       previous = current, current = current->next) {}

  if ( current != NULL  &&  new_part->number == current->number ) {
    printf("Part already exists.\n");
    free(new_part);
    return;
  }

  printf("Enter part name: ");
  readline(new_part->name, NAME_LENGTH);

  printf("Enter quantity on hand: ");
  scanf("%d", &new_part->on_hand);

  new_part->next = current;

  if ( previous == NULL ) {
    inventory = new_part;
  } else {
    previous->next = new_part;
  }
}

void print(void) {
  printf("Part Number   Part Name                  Quantity on Hand\n");
  for (struct part *p = inventory; p != NULL; p = p->next) {
    printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
  }
}

void search(void) {
  printf("Enter part number: ");
  int number;
  scanf("%d", &number);
  
  struct part *p = find_part(number);

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
  
  struct part *p = find_part(number);

  if ( p == NULL ) {
    printf("Part not found.\n");
  } else {
    printf("Enter change in quantity in hand: ");
    int change; // delta
    scanf("%d", &change);
    p->on_hand += change;
  }
}
