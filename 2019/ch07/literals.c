/*
 *
 *   File:
 *      literals.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200111  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 00;
  int j = 0377;
  int k = 0x000;
  int m = 0x0000f;
  int n = -1;

  printf("%d %d %d %d %d\n", i , j, k, m, n);
  printf("%d\n", j * -2);

  printf("-----------------\n");
  printf("Decimal\n");
  printf("%d\n", 4294967296);
  printf("%ld\n", 4294967296);
  printf("%lld\n", 4294967296);

  printf("%d\n", 4294967295);
  printf("%ld\n", 4294967295);
  printf("%lld\n", 4294967295);

  printf("Hex\n");
  printf("%d\n", 0xFFFFFFFF);
  printf("%ld\n", 0xFFFFFFFF);
  printf("%lld\n", 0xFFFFFFFF);

  printf("-----------------\n");
  printf("Decimal\n");
  printf("%d\n", 18446744073709551615);
  printf("%ld\n", 18446744073709551615);
  printf("%lld\n", 18446744073709551615);
  printf("%llu\n", 18446744073709551615LLU);

  printf("Hex\n");
  printf("%d\n", 0xFFFFFFFFFFFFFFFF);
  printf("%ld\n", 0xFFFFFFFFFFFFFFFF);
  printf("%lld\n", 0xFFFFFFFFFFFFFFFF);
  printf("-----------------\n");
  printf("Decimal\n");
  printf("%d\n", 340282366920938463463374607431768211456);
  printf("%ld\n", 340282366920938463463374607431768211456);
  printf("%lld\n", 340282366920938463463374607431768211456);

  exit(EXIT_SUCCESS);
}
