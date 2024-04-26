/*
 *
 *   File:
 *      array_stats.c
 *
 *   Synopsis:
 *      Ex. 11 This program is simple enough that the raw data don't need to be preserved.
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211227  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define DIMENSION 5

int main(void) {
  int n;
  int row_sums[DIMENSION] = {0};
  int col_sums[DIMENSION] = {0};

  for (int row = 0; row < DIMENSION; row++) {
    printf("Enter row %d: ", row + 1);
    for (int col = 0; col < DIMENSION; col++) {
      int count = scanf("%d", &n);
      if ( count != 1 ) {
        fprintf(stderr, "Invalid input.\n");
        exit(EXIT_FAILURE);
      }
      row_sums[row] += n;
      col_sums[col] += n;
    }
  }

  printf("Row totals:");
  for (int row = 0; row < DIMENSION; row++) {
    printf("%3d", row_sums[row]);
  }

  printf("\n");
  
  printf("Column totals:");
  for (int col = 0; col < DIMENSION; col++) {
    printf("%3d", col_sums[col]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
