/*
 *
 *   File:
 *      qsort.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200629  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int ascend(const void *a, const void *b);
int descend(const void *a, const void *b);
void print_array(int a[], int n);

int main(void) {
  int a[10] = {13, 17, 14, 7, 9, 13, 11, 8, 12, 15};

  print_array(a, 10);

  qsort(a, 10, sizeof(int), ascend);
  print_array(a, 10);

  qsort(a, 10, sizeof(int), descend);
  print_array(a, 10);

  exit(EXIT_SUCCESS);
}

int ascend(const void *p, const void *q) {
  int a = *((int *) p);
  int b = *((int *) q);
  return a - b;
}

/* int ascend(const void *a, const void *b) { */
/*   return *((int *) a) - *((int *) b); */
/* } */

int descend(const void *a, const void *b) {
  return *((int *) b) - *((int *) a);
}

void print_array(int a[], int n) {
  printf("[%d", a[0]);

  for (int i = 1; i < n; i++) {
    printf(", %d", a[i]);
  }

  printf("]\n");
}
