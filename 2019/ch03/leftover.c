/*
 *
 *   File:
 *      leftover.c
 *
 *   Synopsis:
 *     A call to scanf(), whether successful or not, may not consume all input on STDIN.
 *     It may leave chars that complicate subsequent scanf() calls.
 *
 *     1. Enter an integer: 8 9
 *        First scanf() reads "8" leaving " 9\n", which is immediately read by second scanf().
 *        User can't enter any additional input.
 *     2. Enter an integer: pung
 *        Non-numeric input causes first scanf() to fail without consuming any input.
 *        Second scanf() encounters the exact same input and obviously fails as well.
 *        
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191222  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int m, n;

  printf("Enter an integer: ");
  int count = scanf("%d", &m);

  printf("Processed: %d\n", count);

  printf("Enter a second integer: ");
  count = scanf("%d", &n);

  printf("Processed: %d\n", count);

  exit(EXIT_SUCCESS);
}
