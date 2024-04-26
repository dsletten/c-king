/*
 *
 *   File:
 *      exercise2.c
 *
 *   Synopsis:
 *      It is not the case that for positive integers i and j,
 *      that (-i)/j == -(i/j) in all cases.
 *
 *      i/j itself is well-defined (since both operands are positive): (truncate i j)
 *      Thus, -(i/j) is also well-defined: (- (truncate i j))
 *
 *      [No longer true as of C99]
 *      However, i > 0 => -i < 0. Thus, (-i)/j is implementation-defined. It is either
 *      (truncate (- i) j) or (floor (- i) j)
 *
 *      In particular, King (pg. 46) states that -9/7 could evaluate to -1 or -2.
 *      But 9/7 => 1, so -(9/7) => -1 in all implementations.
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191231  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int i = 9;
  int j = 7;

  printf("%d %d\n", (-i)/j, -(i/j));

  i = 7;
  j = 9;

  printf("%d %d\n", (-i)/j, -(i/j));

  i = 9;
  j = 9;

  printf("%d %d\n", (-i)/j, -(i/j));

  for (j = 1; j < i; j++) {
    printf("%d %d\n", (-i)/j, -(i/j));
  }

  i = 100;
  bool exception = false;
  for (j = 1; j < i; j++) {
    if ( (-i)/j != -(i/j) ) {
      exception = true;
      printf("%d %d\n", (-i)/j, -(i/j));
    }
  }

  if ( !exception ) {
    printf("No exception\n");
  }

  exit(EXIT_SUCCESS);
}
