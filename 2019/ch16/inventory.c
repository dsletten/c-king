/*
 *
 *   File:
 *      inventory.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200604  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "readline.h"

#define NAME_LENGTH 25
#define MAX_PARTS 100
#define PART_NOT_FOUND -1

struct part {
  int number;
  char name[NAME_LENGTH+1];
  int on_hand;
} inventory[MAX_PARTS];  // <---          Initialized with empty parts?? Not just a bunch 0's??? What's the diff?

int n_parts = 0;

int find_part(int number);
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

int find_part(int number) {
  for (int i = 0; i < n_parts; i++) {
    if ( inventory[i].number == number ) {
      return i;
    }
  }

  return PART_NOT_FOUND;
}

void insert(void) {
  int part_number;

  if ( n_parts == MAX_PARTS ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);

  if ( find_part(part_number) != PART_NOT_FOUND ) {
    printf("Part already exists.\n");
    return;
  }

  inventory[n_parts].number = part_number;
  printf("Enter part name: ");
  readline(inventory[n_parts].name, NAME_LENGTH);

  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[n_parts].on_hand); // Don't need separate local variable.

  n_parts++;
}

void print(void) {
  printf("Part Number   Part Name                  Quantity on Hand\n");
  for (int i = 0; i < n_parts; i++) {
    struct part part = inventory[i];
    printf("%7d       %-25s%11d\n", part.number, part.name, part.on_hand);
  }
}

void search(void) {
  printf("Enter part number: ");
  int number;
  scanf("%d", &number);
  
  int i = find_part(number);
  if ( i == PART_NOT_FOUND ) {
    printf("Part not found.\n");
  } else {
    struct part p = inventory[i];
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
  }
}

void update(void) {
  printf("Enter part number: ");
  int number;
  scanf("%d", &number);
  
  int i = find_part(number);
  if ( i == PART_NOT_FOUND ) {
    printf("Part not found.\n");
  } else {
    printf("Enter change in quantity in hand: ");
    int change; // delta
    scanf("%d", &change);
    inventory[i].on_hand += change;
  }
}
