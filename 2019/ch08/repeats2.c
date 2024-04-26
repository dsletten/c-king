/*
 *
 *   File:
 *      repeats2.c
 *
 *   Synopsis:
 *       Ex. 2
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200301  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define WIDTH "%-12s"

int main(void) {
  int repeats[10] = {0};
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    int digit = n % 10;
    
    repeats[digit]++;
    n /= 10;
  }

  printf(WIDTH, "Digit:");
  for (int i = 0; i < 10; i++) {
    printf("%3d", i);
  }
  printf("\n");

  printf(WIDTH, "Occurrences:");
  for (int i = 0; i < 10; i++) {
    printf("%3d", repeats[i]);
  }
  printf("\n");

  exit(EXIT_SUCCESS);
}
