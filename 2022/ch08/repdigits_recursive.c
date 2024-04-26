/*
 *
 *   File:
 *      repdigits_recursive.c
 *
 *   Synopsis: Recursive version of repdigit2
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230613  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define LABEL_WIDTH 12

void count_digits(long int n, int digit_count[]);
void print_repeats(int digit_count[]);

int main(void) {
  int digit_count[10] = {0};

  long int n = get_long("Enter a number: ");

  count_digits(n, digit_count);
  
  print_repeats(digit_count);

  exit(EXIT_SUCCESS);
}

void count_digits(long int n, int digit_count[]) {
  if ( n > 0 ) {
    int digit = n % 10;

    digit_count[digit]++;
    count_digits(n / 10, digit_count);
  }
}

void print_repeats(int digit_count[]) {
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
}
