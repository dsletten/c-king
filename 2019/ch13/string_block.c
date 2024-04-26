/*
 *
 *   File:
 *      string_block.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200518  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *messages[5];

  for (int i = 0; i < 5; i++) {
    {
      char s[50];
      fgets(s, sizeof(s), stdin);
      s[strcspn(s, "\n")] = '\0';
      messages[i] = s;
    }
  }

  for (int i = 0; i < 5; i++) {
    printf("|%s|\n", messages[i]);
  }

  exit(EXIT_SUCCESS);
}
