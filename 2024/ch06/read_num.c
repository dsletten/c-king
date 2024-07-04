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
 *      240609  Original.
 *
 */
#include "read_num.h"

double read_double(char* prompt) {
  printf("%s", prompt);

  double x;
  int count = scanf("%lf", &x);

  if ( count == 1 ) {
    return x;
  } else {
    while ( getchar() != '\n' ) {}
    return read_double(prompt);
  }
}

double read_double_min_max(char* prompt, double min, double max) {
  double d = read_double(prompt);

  if ( d >= min  &&  d <= max ) {
    return d;
  } else {
    return read_double_min_max(prompt, min, max);
  }
}

int read_int_no_prompt() {
  return read_int("");
}

int read_int(char* prompt) {
  printf("%s", prompt);

  int n;
  int count = scanf("%d", &n);

  if ( count == 1 ) {
    return n;
  } else {
    while ( getchar() != '\n' ) {}
    return read_int(prompt);
  }
}

int read_int_min(char* prompt, int min) {
  int n = read_int(prompt);

  if ( n >= min ) {
    return n;
  } else {
    return read_int_min(prompt, min);
  }
}

int read_int_min_max(char* prompt, int min, int max) {
  int n = read_int(prompt);

  if ( n >= min  &&  n <= max ) {
    return n;
  } else {
    return read_int_min_max(prompt, min, max);
  }
}

void read_fraction(char* prompt, int* numerator, int* denominator) {
  printf("%s", prompt);

  int count = scanf("%d/%d", numerator, denominator);

  if ( count == 2  &&  *denominator != 0 ) {
    return;
  } else {
    while ( getchar() != '\n' ) {}
    return read_fraction(prompt, numerator, denominator);
  }
}
  
