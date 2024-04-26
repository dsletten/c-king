/*
 *
 *   File:
 *      line.c
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
#include "line.h"

#define MAX_LINE_LENGTH 60

char line[MAX_LINE_LENGTH+1];
int line_length = 0;
int n_words = 0;

void clear_line(void) {
  line[0] = '\0';
  line_length = 0;
  n_words = 0;
}

void add_word(const char *word) {
  if ( n_words > 0 ) {
    line[line_length] = ' ';
    line[line_length+1] = '\0';
    line_length++;
  }

  strcat(line, word);
  line_length += strlen(word);
  n_words++;
}

int space_remaining(void) {
  return MAX_LINE_LENGTH - line_length;
}

void write_line(void) {
  int extra_spaces = space_remaining();

  for (int i = 0; i < line_length; i++) {
    if ( line[i] != ' ' ) {
      putchar(line[i]);
    } else {
      int spaces_to_insert = extra_spaces / (n_words - 1);
      for (int j = 1; j <= spaces_to_insert + 1; j++) {
        putchar(' ');
      }

      extra_spaces -= spaces_to_insert;
      n_words--;
    }
  }

  putchar('\n');
}

void flush_line(void) {
  if ( line_length > 0 ) {
    puts(line);
  }
}
