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
 *      230602  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N_RATES 5
#define YEAR_HEADER 6
#define INTEREST_HEADER 7

void print_row(int widths[] , char *text[], int n);
void print_headers(int n, int rate);
int get_interest_rate(void);
int get_years();
int get_int(char *prompt, int min, int max);

int main(void) {
  double principal = 100;
  double interest[N_RATES];

  for (int i = 0; i < N_RATES; i++) {
    interest[i] = principal;
  }

  int rate = get_interest_rate();
  int years = get_years();
  
  print_headers(N_RATES + 1, rate);

  int widths[N_RATES + 1];
  widths[0] = -YEAR_HEADER; // Left-justify
  char *text[N_RATES+1];
  text[0] = malloc(YEAR_HEADER+1);

  for (int i = 1; i <= N_RATES; i++) {
    widths[i] = INTEREST_HEADER;
    text[i] = malloc(INTEREST_HEADER+1);
  }

  for (int i = 1; i <= years; i++) {
    snprintf(text[0], YEAR_HEADER+1, "%3d", i);
    for (int j = 0; j < N_RATES; j++) {
      interest[j] *= (1 + (rate + j) * 0.01);
      snprintf(text[j+1], INTEREST_HEADER+1, "%.2f", interest[j]);
    }

    print_row(widths, text, N_RATES+1);
  }

  for (int i = 0; i < N_RATES; i++) {
    free(text[i]);
  }

  exit(EXIT_SUCCESS);
}

/*
 *    Print a row of `n` strings formatted with the given `widths`.
 *    Ends with newline.
 */
void print_row(int widths[], char *text[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%*s", widths[i], text[i]);
  }

  printf("\n");
}

/*
 *    Print the `n` headers of a table starting with the given interest rate.
 */
void print_headers(int columns, int rate) {
  int widths[columns];
  widths[0] = -YEAR_HEADER;

  char *text[columns];
  text[0] = "Years";

  for (int i = 1; i < columns; i++) {
    widths[i] = INTEREST_HEADER;
    text[i] = malloc(INTEREST_HEADER+1);
    snprintf(text[i], INTEREST_HEADER+1, "%d%%  ", i + (rate-1));
  }
  
  print_row(widths, text, columns);

  for (int i = 1; i < columns; i++) {
    free(text[i]);
  }
}

int get_int(char *prompt, int min, int max) {
  int n;
  printf("%s", prompt);
  int count = scanf("%d", &n);

  if ( count == 1 ) {
    if ( n >= min  &&  n <= max ) {
      return n;
    } else {
      return get_int(prompt, min, max);
    }
  } else {
    while ( getchar() != '\n' );
    return get_int(prompt, min, max);
  }
}

int get_interest_rate() {
  return get_int("Enter interest rate: ", 0, 100);
}

int get_years() {
  return get_int("Enter number of years: ", 1, 20);
}
