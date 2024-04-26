/*
 *
 *   File:
 *      arrays.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200221  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
  int a[5] = {0, 1, 2, 3, 4};
  int b[5] = {2, 3};
  int c[5] = {0};
  double d[5] = {0};
  int e[] = {2, 4, 6, 8, 10};

  int i;
  printf("Enter array size: ");
  scanf("%d", &i);

  double f[i];

  printf("a %zd\n", sizeof(a));
  printf("a[0] %zd\n", sizeof(a[0]));
  printf("a length %zd\n", sizeof(a) / sizeof(a[0]));
  printf("a length %zd\n", LENGTH(a));

  printf("f %zd\n", sizeof(f));
  printf("f[0] %zd\n", sizeof(f[0]));
  printf("f length %zd\n", sizeof(f) / sizeof(f[0]));
  printf("f length %zd\n", LENGTH(f));
  
  exit(EXIT_SUCCESS);
}
