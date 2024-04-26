/*
 *
 *   File:
 *      identity.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230608  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
  double identity[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      identity[i][j] = i == j;
    }
  }
  
  exit(EXIT_SUCCESS);
}
