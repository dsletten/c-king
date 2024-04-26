/*
 *
 *   File:
 *      arrays.c
 *
 *   Synopsis:
 *       Ch. 9 Exercise 10
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200421  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define N 10

int max(int a[], int n);
double average(int a[], int n);
int positive(int a[], int n);

int main(void) {
  //  int a[N] = {18, 7, 0, 1, 3, 3, 9, 4, 5, 19};
  //  int a[N] = {28, 26, 41, 19, 86, 4, 1, 67, 15, 34};
  /* int a[N] = {77, 13, 32, 86, 53, 73, 84, 79, 26, 2}; */
  /* int a[N] = {11, 73, 64, 58, 6, 90, 11, 27, 86, 73}; */
  /* int a[N] = {36, 12, 15, 8, 92, 90, 19, 71, 33, 35}; */
  /* int a[N] = {-17, -15, 6, -26, -42, 26, 41, 16, 1, 17}; */
  int a[N] = {37, 30, 79, 5, -14, -15, 7, 76, 55, -11};
  /* int a[N] = {-7, 2, 52, 55, 57, 27, -12, 28, 7, -7}; */

  printf("Maximum element: %d\n", max(a, N));
  printf("Average value: %f\n", average(a, N));
  printf("Number of positive values: %d\n", positive(a, N));

  exit(EXIT_SUCCESS);
}

int max(int a[], int n) {
  int max = a[0];
  for (int i = 1; i < n; i++) {
    if ( a[i] > max ) {
      max = a[i];
    }
  }

  return max;
}

double average(int a[], int n) {
  double sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum / n;
}

int positive(int a[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if ( a[i] > 0 ) {
      count++;
    }
  }

  return count;
}
