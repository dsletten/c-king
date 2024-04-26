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
 *      220831  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CUBIC_INCHES_PER_LB 166

int main(void) {
  int height;
  printf("Enter height of box: ");
  scanf("%d", &height);

  int length;
  printf("Enter length of box: ");
  scanf("%d", &length);

  int width;
  printf("Enter width of box: ");
  scanf("%d", &width);

  int volume = height * length * width;
  int weight = (volume + CUBIC_INCHES_PER_LB - 1) / CUBIC_INCHES_PER_LB;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  exit(EXIT_SUCCESS);
}
