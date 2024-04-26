/*
 *
 *   File:
 *      repdigit2.c
 *
 *   Synopsis: Exercise 8-2
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230612  Original.
 *
 *      scanf() may yield odd results:
 *      repdigit2
 *      Enter a number: 9223372036854775807              (1- (expt 2 63))
 *      Digit:        0  1  2  3  4  5  6  7  8  9
 *      Occurrences:  2  0  3  3  1  2  1  4  2  1
 *      
 *      repdigit2
 *      Enter a number: 18446744073709551615             (1- (expt 2 64))
 *      Digit:        0  1  2  3  4  5  6  7  8  9
 *      Occurrences:  2  0  3  3  1  2  1  4  2  1
 *
 *      scanf() stores the same value for `n` in both cases! => Same digit counts
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define LABEL_WIDTH 12

int main(void) {
  int digit_count[10] = {0};

  long int n = get_long("Enter a number: ");

  while ( n > 0 ) {
    int digit = n % 10;

    digit_count[digit]++;
    n /= 10;
  }

  printf("%-*s", LABEL_WIDTH, "Digit:");
  for (int i = 0; i < 10; i++) {
    printf("%3d", i);
  }
  printf("\n");
  
  printf("%-*s", LABEL_WIDTH, "Occurrences:");
  for (int i = 0; i < 10; i++) {
    printf("%3d", digit_count[i]);
  }
  printf("\n");

  exit(EXIT_SUCCESS);
}
