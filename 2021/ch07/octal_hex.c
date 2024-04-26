/*
 *
 *   File:
 *      octal_hex.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211202  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 10;
  int j = 255;

  printf("%o %#o %o %#o\n", i, i, j , j);
  printf("%x %#x %x %X %#x\n", i, i, j , j, j);

  printf("Enter octal literal: ");
  scanf("%o", &i);
  printf("%o %#o\n", i, i);

  printf("Enter hexadecimal literal: ");
  scanf("%x", &j);
  printf("%x %X %#x\n", j , j, j);

  exit(EXIT_SUCCESS);
}
