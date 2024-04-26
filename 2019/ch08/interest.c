/*
 *
 *   File:
 *      interest.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200222  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH(a) (sizeof(a) / sizeof(a[0]))
#define COLS 5

int get_int(char *prompt);
double get_double(char *prompt);
void print_headers(double rate);

int main(void) {
  double initial_investment = get_double("Enter initial value: ");
  double rate = get_double("Enter interest rate: ");
  int span = get_int("Enter number of years: ");

  double values[COLS];
  
  print_headers(rate);
  
  for (int i = 0; i < LENGTH(values); i++) {
    values[i] = initial_investment;
  }

  for (int year = 1; year <= span; year++) {
    printf("%3d   ", year);

    for (int i = 0; i < LENGTH(values); i++) {
      values[i] += values[i] * (rate + i) / 100.0;
      printf("%8.2f", values[i]);
    }      

    printf("\n");
  }

  exit(EXIT_SUCCESS);
}

/*
 *    Read and return a non-negative integer.
 */
int get_int(char *prompt) {
  int n;
  printf("%s", prompt);
  
  int count = scanf("%d", &n);
  
  if ( count == 1  &&  n >= 0 ) {
    return n;
  } else {
    while ( getchar() != '\n' ) {}
    return get_int(prompt);
  }
}

/*
 *    Read and return a non-negative double.
 */
double get_double(char *prompt) {
  double d;
  printf("%s", prompt);
  
  int count = scanf("%lf", &d);

  if ( count == 1  &&  d >= 0 ) {
    return d;
  } else {
    while ( getchar() != '\n' ) {}
    return get_double(prompt);
  }
}

void print_headers(double rate) {
  printf("\n");
  printf("Years");

  for (int i = 0; i < COLS; i++) {
    printf("%7.1f%%", rate + i);
  }

  printf("\n");
}

