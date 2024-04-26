/*
 *
 *   File:
 *      digit_count.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211006  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a number: "); // Non-negative??
  int n;
  scanf("%d", &n);

  int digits;
  if ( n < 0 ) {
    printf("What are you doing?\n");
    exit(EXIT_FAILURE); 
  } else if ( n < 10 ) {
    digits = 1;
  } else  if ( n < 100 ) {
    digits = 2;
  } else if ( n < 1000 ) {
    digits = 3;
  } else if ( n < 10000 ) {
    digits = 4;
  } else {
    printf("What's up with that?\n");
    exit(EXIT_FAILURE);
  }

  printf("The number %d has %d %s\n", n, digits, (digits == 1 ? "digit" : "digits"));
  
  exit(EXIT_SUCCESS);
}
