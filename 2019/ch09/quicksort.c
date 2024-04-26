/*
 *
 *   File:
 *      quicksort.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200412  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
  //  int a[N] = {18, 7, 0, 1, 3, 3, 9, 4, 5, 19};
  //  int a[N] = {28, 26, 41, 19, 86, 4, 1, 67, 15, 34};
  /* int a[N] = {77, 13, 32, 86, 53, 73, 84, 79, 26, 2}; */
  /* int a[N] = {11, 73, 64, 58, 6, 90, 11, 27, 86, 73}; */
  /* int a[N] = {36, 12, 15, 8, 92, 90, 19, 71, 33, 35}; */
  /* int a[N] = {-17, -15, 6, -26, -42, 26, 41, 16, 1, 17}; */
  int a[N] = {37, 30, 79, 5, -14, -15, 7, 76, 55, -11};
  /* int a[N] = {-7, 2, 52, 55, 57, 27, -12, 28, 7, -7}; */

  int b[N];

  memcpy(b, a, sizeof(b));

  quicksort(a, 0, N-1);

  printf("Initial: ");
  for (int i = 0; i < N; i++) {
    printf("%3d", b[i]);
  }
  printf("\n");

  printf("Sorted: ");
  for (int i = 0; i < N; i++) {
    printf("%3d", a[i]);
  }
  printf("\n");

  exit(EXIT_SUCCESS);
}

void quicksort(int a[], int low, int high) {
  if ( low >= high ) {
    return;
  } else {
    int middle = split(a, low, high);

    quicksort(a, low, middle-1);
    quicksort(a, middle+1, high);
  }
}

int split(int a[], int low, int high) {
  int partitioning_element = a[low];

  while ( true ) {
    while ( high > low  &&  a[high] >= partitioning_element ) {
      high--;
    }

    if ( low >= high ) { break; }

    a[low++] = a[high];

    while ( low < high  &&  a[low] <= partitioning_element ) {
      low++;
    }

    if ( low >= high ) { break; }
    
    a[high--] = a[low];
  }

  a[high] = partitioning_element;
  return high;
}
