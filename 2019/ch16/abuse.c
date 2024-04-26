/*
 *
 *   File:
 *      abuse.c
 *
 *   Synopsis:
 *       See CARM pg. 165 (Mis)using Union Types
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200606  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary(double d);

int main(void) {

  print_binary(2.3456);

  exit(EXIT_SUCCESS);
}

void print_binary(double d) {
  union {
    double d;
    long l;
  } number;

  number.d = d;

  printf("The representation of %12.7e is %#010lX\n", number.d, number.l);
}
