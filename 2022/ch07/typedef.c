/*
 *
 *   File:
 *      typedef.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230520  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Size of char: %lu\n", sizeof (char));
  printf("Size of short int: %lu\n", sizeof (short int));
  printf("Size of int: %lu\n", sizeof (int));

  typedef char Int8;
  typedef short int Int16;
  typedef int Int32;

  Int8 i8 = 127;
  Int16 i16 = 32767;
  Int32 i32 = 2147483647;

  printf("Int8: %d\n", i8);
  printf("Int16: %hd\n", i16);
  printf("Int32: %d\n", i32);

  exit(EXIT_SUCCESS);
}
