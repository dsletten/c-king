/*
 *
 *   File:
 *      max_min.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200501  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int b[N], big, small;

  printf("Enter %d integers: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  exit(EXIT_SUCCESS);
}

void max_min(int a[], int n, int *max, int *min) {
  *max = a[0];
  *min = a[0];

  for (int i = 1; i < n; i++) {
    if ( a[i] > *max ) {
      *max = a[i];
    } else if ( a[i] < *min ) {
      *min = a[i];
    }
  }
}
