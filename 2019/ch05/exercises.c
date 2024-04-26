/*
 *
 *   File:
 *      exercises.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200103  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, k;

  printf("Exercise 1.\n");
  printf("(a)\n");
  i = 2;
  j = 3;
  k = i * j == 6; // AKA (i * j) == 6
  printf("%d\n", k);
  printf("%d\n", i * (j == 6));

  printf("(b)\n");
  i = 5;
  j = 10;
  k = 1;
  printf("%d\n", k > i < j); // {0, 1} < 10 always true

  printf("(c)\n");
  i = 3;
  j = 2; 
  k = 1;
  printf("%d\n", i < j == j < k);

  printf("(d)\n");
  i = 3;
  j = 4;
  k = 5;
  printf("%d\n", i % j + i < k);

  printf("Exercise 2.\n");
  printf("(a)\n");
  i = 10;
  j = 5;
  printf("%d\n", !i < j);

  printf("(b)\n");
  i = 2; 
  j = 1;
  printf("%d\n", !!i + !j);

  printf("(c)\n");
  i = 5;
  j = 0;
  k = -5;
  printf("%d\n", i && j || k);

  printf("(d)\n");
  i = 1;
  j = 2;
  k = 3;
  printf("%d\n", i < j || k);

  printf("Exercise 3.\n");
  printf("(a)\n");
  i = 3;
  j = 4;
  k = 5;
  printf("%d ", i < j || ++j < k); // Short-circuit -> no side effect
  printf("%d %d %d\n", i, j, k);

  printf("(b)\n");
  i = 7;
  j = 8;
  k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);

  printf("(c)\n");
  i = 7;
  j = 8;
  k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);

  printf("(d)\n");
  i = 1;
  j = 1;
  k = 1;
  printf("%d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  printf("Exercise 11.\n");
  int n = 0;
  if ( n >= 1 <= 10 ) {
    printf("%d is between 1 and 10\n", n);
  }

  printf("Exercise 12.\n");
  n = 5;
  if ( n == 1-10 ) {
    printf("%d is between 1 and 10\n", n);
  }

  printf("Exercise 13.\n");
  i = 17;
  printf("%d\n", i >= 0 ? i : -i);

  i = -17;
  printf("%d\n", i >= 0 ? i : -i);

  printf("Exercise 16.\n");
  i = 1;
  switch ( i % 3 ) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
  }

  printf("\n");
  
  exit(EXIT_SUCCESS);
}
