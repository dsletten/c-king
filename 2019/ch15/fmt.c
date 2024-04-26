/*
 *
 *   File:
 *      fmt.c
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
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LENGTH 20

int main(void) {
  char word[MAX_WORD_LENGTH+2];
  clear_line();

  while ( true ) {
    read_word(word, MAX_WORD_LENGTH+1);
    int word_length = strlen(word);

    if ( word_length == 0 ) {
      flush_line();
      exit(EXIT_SUCCESS);
    } else if ( word_length > MAX_WORD_LENGTH ) {
      word[MAX_WORD_LENGTH] = '*';
    }

    if ( word_length + 1 > space_remaining() ) { // Semantics??
      write_line();
      clear_line();
    }

    add_word(word);
  }
}
