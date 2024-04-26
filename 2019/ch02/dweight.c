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
 *      190723  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define CUBIC_IN_PER_LB 166

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + CUBIC_IN_PER_LB - 1) / CUBIC_IN_PER_LB;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  exit(EXIT_SUCCESS);
}
