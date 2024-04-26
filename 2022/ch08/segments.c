/*
 *
 *   File:
 *      segments.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230704  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "utils.h"

char units[][3] = {{' ', ' ', ' '},
                   {' ', ' ', '|'},
                   {' ', '_', ' '},
                   {' ', '_', '|'},
                   {'|', ' ', ' '},
                   {'|', ' ', '|'},
                   {'|', '_', ' '},
                   {'|', '_', '|'}};

int segments[][3] = {{2, 5, 7},
                   {0, 1, 1},
                   {2, 3, 6},
                   {2, 3, 3},
                   {0, 7, 1},
                   {2, 6, 3},
                   {2, 6, 7},
                   {2, 1, 1},
                   {2, 7, 7},
                   {2, 7, 3}};

void print_digit(int digit);
void print_number(int number);

int main(void) {
  int n = get_int_min("Enter a number: ", 0);
  print_number(n);
  
  exit(EXIT_SUCCESS);
}

//
//     Not used in final program
//     
void print_digit(int digit) {
  for (int row = 0; row < 3; row++) {
    int unit = segments[digit][row];
    for (int segment = 0; segment < 3; segment++) {
      printf("%c", units[unit][segment]);
    }
    printf("\n");
  }
}

void print_number(int number) {
  int n_digits = number == 0 ? 1 : floor(log10(number)) + 1;

  int digits[n_digits];

  for (int i = n_digits - 1; i >= 0; i--) {
    digits[i] = number % 10;
    number /= 10;
  }

  for (int row = 0; row < 3; row++) {
    for (int i = 0; i < n_digits; i++) {
      int unit = segments[digits[i]][row];
      for (int segment = 0; segment < 3; segment++) {
        printf("%c", units[unit][segment]);
      }

      printf(" ");
    }

    printf("\n");
  }
}
