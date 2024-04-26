/*
 *
 *   File:
 *      nested.c
 *
 *   Synopsis:
 *       Only preprocess! cc -E
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200525  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define CONCAT(x, y) x##y
#define CONCAT2(x, y) CONCAT(x, y)

#define S(x) #x
#define S1(x) S(x)

#define N 10

int main(void) {
  CONCAT(a, CONCAT(b, c)); // ->   aCONCAT(b, c);
  CONCAT2(a, CONCAT2(b, c)); // ->   abc;

  S(N); // ->   "N";
  S1(N); // ->   "10";

  exit(EXIT_SUCCESS);
}
