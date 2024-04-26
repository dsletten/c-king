/*
 *
 *   File:
 *      repdigit3.c
 *
 *   Synopsis: Exercise 8-3
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230619  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"

#define LABEL_WIDTH 12

int main(void) {
  int digit_count[10]; // Move declaration into else block. Automatic initialization.

  while ( true ) {
    long int n = get_long("Enter a number: ");

    if ( n <= 0 ) {
      break;
    } else {
      for (int i = 0; i < 10; i++) {
        digit_count[i] = 0;
      }
      
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
    }
  }

  exit(EXIT_SUCCESS);
}
