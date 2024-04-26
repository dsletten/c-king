/*
 *
 *   File:
 *      dumb.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200520  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define PUNG /* This is really dumb! */ 2
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

#define CHECK_ZERO(divisor) \
  if ( (divisor) == 0 ) {                               \
  printf("Attempt to divide by zero at %d\n", __LINE__); \
  }

int main(void) {
  printf("Pung: %d\n", PUNG);

  printf("a -> %c\n", TOUPPER('a'));
  printf("A -> %c\n", TOUPPER('A'));

  int i = 5;
  int j = 2;
  if ( i > 2 )
    CHECK_ZERO(j)
  else
    printf("i is OK...\n");

  


  exit(EXIT_SUCCESS);
}
