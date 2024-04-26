/*
 *
 *   File:
 *      digits.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200103  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 10000
#define ERROR -1

int count_digits(int n) {
  if ( n < MIN  ||  n >= MAX ) {
    return ERROR;
  } else if ( n < 10 ) {
    return 1;
  } else if ( n < 100 ) {
    return 2;
  } else if ( n < 1000 ) {
    return 3;
    //  } else if ( n < 10000 ) {
  } else {
    return 4;
  }
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  int digits = count_digits(n);
  
  if ( digits == ERROR ) {
    printf("Shame on you!\n");
  } else {
    printf("The number %d has %d %s.\n", n, digits, digits == 1 ? "digit" : "digits");
  }

  exit(EXIT_SUCCESS);
}
