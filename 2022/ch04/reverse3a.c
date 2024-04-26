/*
 *
 *   File:
 *      reverse3a.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221005  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a three-digit number: ");

  int a, b, c;
  scanf("%1d%1d%1d", &a, &b, &c);

  printf("The number reversed is: %d%d%d\n", c, b, a);
  
  exit(EXIT_SUCCESS);
}
