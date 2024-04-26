/*
 *
 *   File:
 *      find_two_largest.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200503  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {5, 4, 3, 2, 1};
  int c[5] = {3, 1, 4, 2, 5};
  int d[3] = {1, 1, 1};
  int e[3] = {0, 0, 1};

  int largest, second_largest;

  find_two_largest(a, 5, &largest, &second_largest);
  printf("Largest: %d Second largest: %d\n", largest, second_largest);

  find_two_largest(b, 5, &largest, &second_largest);
  printf("Largest: %d Second largest: %d\n", largest, second_largest);

  find_two_largest(c, 5, &largest, &second_largest);
  printf("Largest: %d Second largest: %d\n", largest, second_largest);

  find_two_largest(d, 3, &largest, &second_largest);
  printf("Largest: %d Second largest: %d\n", largest, second_largest);

  find_two_largest(e, 3, &largest, &second_largest);
  printf("Largest: %d Second largest: %d\n", largest, second_largest);

  exit(EXIT_SUCCESS);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
  if ( n < 2 ) {
    printf("Bad!\n");
  } else {
    if ( a[1] > a[0] ) {
      *largest = a[1];
      *second_largest = a[0];
    } else {
      *largest = a[0];
      *second_largest = a[1];
    }

    for (int i = 2; i < n; i++) {
      if ( a[i] > *largest ) {
        *second_largest = *largest;
        *largest = a[i];
      }
    }
  }
}
      
