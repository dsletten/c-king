/*
 *
 *   File:
 *      mystery2.c
 *
 *   Synopsis:
 *      Exercise 8
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190729  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x, y;
  int i;

  scanf("%f%d%f", &x, &i, &y);

  if ( x == (float) 12.3 ) {
    printf("One right!\n");
  }

  if ( i == 45 ) {
    printf("Two right!\n");
  }

  if ( y == (float) 0.6 ) {
    printf("Three right!\n");
  }
  
  exit(EXIT_SUCCESS);
}
