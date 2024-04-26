/*
 *
 *   File:
 *      strings.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200508  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

char digit_to_hex_char(int digit);

int main(void) {
  for (int i = 0; i < 32; i++) {
    printf("%c", digit_to_hex_char(i));
  }

  printf("\n");

  char *p = "pung";
  printf(p);
  printf("\n");

  /* *(p+3) = 'k'; */

  printf(p);
  printf("\n");

  char s[4] = "pung";

  char s1[] = "pung";
  char *s2 = "pung";

  printf("%lu\n", (unsigned long) sizeof(s1));
  printf("%lu\n", (unsigned long) sizeof(s2));

  char p1[] = "Is this not ";
  char *p2 = "pung";

  printf("%s%s?\n", p1, p2);

  exit(EXIT_SUCCESS);
}

char digit_to_hex_char(int digit) {
  return "0123456789ABCDEF"[digit % 16];
}
