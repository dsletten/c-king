/*
 *
 *   File:
 *      read_num.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240521  Original.
 *
 */

#include "read_num.h"

int read_int_(char* prompt) {
  printf("%s", prompt);
  int n;
  int count = scanf("%d", &n);

  if ( count == 1 ) {
    return n;
  } else {
    while ( getchar() != '\n' );

    return read_int_(prompt);
  }
}

int read_int(char* prompt, int min, int max) {
  int n = read_int_(prompt);

  if ( n >= min  &&  n <= max ) {
    return n;
  } else {
    while ( getchar() != '\n' );

    return read_int(prompt, min, max);
  }
}

double read_double(char* prompt, double min, double max) {
  printf("%s", prompt);
  double x;
  int count = scanf("%lf", &x);

  if ( count == 1  &&  x >= min  &&  x <= max ) {
    return x;
  } else {
    while ( getchar() != '\n' );

    return read_double(prompt, min, max);
  }
}
