/*
 *
 *   File:
 *      array_stats.c
 *
 *   Synopsis: Exercise 11
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230709  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define N 5

int main(void) {
  int values[N][N];

  for (int i = 0; i < N; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < N; j++) {
      values[i][j] = get_int(NULL);
    }
  }

  int row_sums[N] = {0};
  int col_sums[N] = {0};
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      row_sums[i] += values[i][j];
      col_sums[j] += values[i][j];
    }
  }

  printf("Row totals:");
  for (int i = 0; i < N; i++) {
    printf(" %d", row_sums[i]);
  }
  printf("\n");

  printf("Column totals:");
  for (int i = 0; i < N; i++) {
    printf(" %d", col_sums[i]);
  }
  printf("\n");

  exit(EXIT_SUCCESS);
}
