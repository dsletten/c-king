/*
 *
 *   File:
 *      dweight.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240426  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CUBIC_IN_PER_LB 166

int main(void) {
  int height = 8, length = 12, width = 10;
  int volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + CUBIC_IN_PER_LB - 1) / CUBIC_IN_PER_LB);
  
  exit(EXIT_SUCCESS);
}
