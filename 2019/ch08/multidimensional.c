/*
 *
 *   File:
 *      multidimensional.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200224  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(void) {
  double identity[N][N] = {0.0};

  /* const int m[2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; */

  /* printf("%d\n", m[1][0]); */
  /* m[1][0] = 94; */
  /* printf("%d\n", m[1][0]); */

  for (int i = 0; i < N; i++) {
    identity[i][i] = 1.0;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%5.1f", identity[i][j]);
    }
    printf("\n");
  }

  double copy[N][N];
  memcpy(copy, identity, sizeof(copy));

  printf("\n");

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%5.1f", copy[i][j]);
    }
    printf("\n");
  }

  int a[4][3] = {{0, 0, 1},
		 {0, 1, 0},
		 {0, 1, 1},
		 {1, 0, 0}};

  int b[4][3] = {{0, 0, 1},  // Initialize 48 bytes to 0 (12 * 4) [8 bytes at a time, i.e., across row boundaries in some cases!]. Then initialize the 2 elements with 1.
		 {0, 1, 0}};

  int c[4][3] = {{1, 1, 1},
		 {1, 1},
		 {1},
		 {1}};

  exit(EXIT_SUCCESS);
}
