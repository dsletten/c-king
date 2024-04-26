/*
 *
 *   File:
 *      readline.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200604  Original.
 *
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "readline.h"

int readline(char s[], int n) {
  int ch, i = 0;

  while ( isspace(ch = getchar()) ) {}

  /* while ( ch != '\n'  &&  ch != EOF ) { */
  /*   if ( i < n ) { */
  /*     s[i++] = ch; */
  /*   } */

  /*   ch = getchar(); */
  /* } */

  /* s[i] = '\0'; */

  ungetc(ch, stdin);

  fgets(s, n+1, stdin);
  s[strcspn(s, "\n")] = 0;
  return (int) strlen(s);

  return i;
}
