/*
 *
 *   File:
 *      word.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200528  Original.
 *
 */
#include <stdio.h>
#include "word.h"

int read_char(void) {
  int ch = getchar();

  if ( ch == '\n'  ||  ch == '\t' ) {
    return ' ';
  } else {
    return ch;
  }
}

void read_word(char *word, int n) {
  int ch;
  int pos = 0;

  while ( (ch = read_char()) == ' ') {}

  while ( ch != ' '  &&  ch != EOF ) {
    if ( pos < n ) {
      word[pos++] = ch;
    }

    ch = read_char();
  }

  word[pos] = '\0';
}


  
