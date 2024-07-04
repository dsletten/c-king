/*
 *
 *   File:
 *      tricks.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Ex. 9\n");
  int i;
  int j;
  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
    printf("%d ", i);
  }
  
  printf("\n");

  printf("Ex. 13\n");
  int sum = 0;
  for (i = 0; i < 10; i++) {
    if ( i % 2 ) {
      continue;
    }
    sum += i;
  }

  printf("%d\n", sum);

  sum = 0;
  for (i = 0; i < 10; i += 2) {
    sum += i;
  }

  printf("%d\n", sum);

  printf("Ex. 15\n");
  int m = 6;
  int n;

  for (n = 0; m > 0; n++) {
    m /= 2;
  }

  printf("%d\n", n);

  //    Right
  m = 6;
  for (n = 0; m > 0; n++, m /= 2) {}
  //    No real difference, but closer to original semantics
  //  for (n = 0; m > 0; m /= 2, n++) {}

  printf("%d\n", n);

  //    Wrong
  m = 6;
  for (n = 0; m /= 2, m > 0; n++) {}

  printf("%d\n", n);

  //    Ok
  m = 6;
  for (n = 0; n++, (m /= 2) > 0;) {}
  //  for (n = 0; n++, m /= 2 > 0;) {} <------- Wrong!!!

  printf("%d\n", n);

  exit(EXIT_SUCCESS);
}
