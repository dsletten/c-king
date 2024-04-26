/*
 *
 *   File:
 *      ticket.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211126  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CHECK_DIVISOR 7

int main(void) {
  printf("Enter ticket number: ");

  int previous = getchar();

  if ( previous == '\n' ) {
    fprintf(stderr, "Empty ticket number.\n");
    exit(EXIT_FAILURE);
  } else {
    int result = 0;
    int current;

    while ( (current = getchar()) != '\n' ) {
      //      result = (result % CHECK_DIVISOR) * 10 + (previous - '0');
      result = (result * 10 + (previous - '0')) % CHECK_DIVISOR;
      previous = current;
    }

    printf("%d %d\n", result, previous - '0');

    exit(EXIT_SUCCESS);
  }
}
