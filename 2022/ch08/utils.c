/*
 *
 *   File:
 *      utils.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230623  Original.
 *
 */

#include <stdio.h>
#include <ctype.h>

int get_int(char *prompt) {
  int n;

  if ( prompt ) {
    printf("%s", prompt);
  }

  int count = scanf("%d", &n);

  if ( count == 1 ) {
    return n;
  } else {
    while ( !isspace(getchar()) );
    return get_int(prompt);
  }
}

int get_int_min(char *prompt, int min) {
  int n = get_int(prompt);

  if ( n >= min ) {
    return n;
  } else {
    return get_int_min(prompt, min);
  }
}

int get_int_in_range(char *prompt, int min, int max) {
  int n = get_int(prompt);

  if ( n >= min  &&  n <= max ) {
    return n;
  } else {
    return get_int_in_range(prompt, min, max);
  }
}

long get_long(char *prompt) {
  long n;

  if ( prompt ) {
    printf("%s", prompt);
  }

  int count = scanf("%ld", &n);

  if ( count == 1 ) {
    return n;
  } else {
    while ( !isspace(getchar()) );
    return get_long(prompt);
  }
}

long get_long_in_range(char *prompt, long min, long max) {
  long n = get_long(prompt);

  if ( n >= min  &&  n <= max ) {
    return n;
  } else {
    return get_long_in_range(prompt, min, max);
  }
}
