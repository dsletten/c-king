/*
 *
 *   File:
 *      mystery1.c
 *
 *   Synopsis:
 *      Exercise 7
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190729  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;
  float x;

  scanf("%d%f%d", &i, &x, &j);

  if ( i == 10 ) {
    printf("One right!\n");
  }

  if ( x == (float) 0.3 ) {
    printf("Two right!\n");
  }

  printf("%f\n", x);

  if ( j == 5 ) {
    printf("Three right!\n");
  }
  
  exit(EXIT_SUCCESS);
}
