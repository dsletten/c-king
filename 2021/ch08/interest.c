/*
 *
 *   File:
 *      interest.c
 *
 *   Synopsis:
 *      Ex. 6
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211221  Original.
 *
 *      https://en.wikipedia.org/wiki/Compound_interest
 *      https://www.investor.gov/financial-tools-calculators/calculators/compound-interest-calculator
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N_RATES (sizeof(value)/sizeof(value[0]))
#define INITIAL_BALANCE 100.0

int main(void) {
  int low_rate, n_years;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &n_years);

  printf("\n");
  printf("Years");
  for (int i = 0; i < N_RATES; i++) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }

  printf("\n");

  for (int year = 1; year <= n_years; year++) {
    printf("%3d    ", year);
    for (int i = 0; i < N_RATES; i++) {
      double interest = 1;
      /*
       *    Compound interest manually
       */
      for (int j = 1; j <= 12; j++) { // Manual
        interest *= (1 + (low_rate + i) / 100.0 / 12);
      }
      double v = value[i] * interest;
      printf("%7.2f", v);
      /* fprintf(stderr, "%lx\n", v); */
    }
    printf("\n");
    
    printf("%3d    ", year);
    for (int i = 0; i < N_RATES; i++) {
      /*
       *    Compound interest using pow()
       */
      value[i] *= pow(1 + (low_rate + i) / 100.0 / 12, 12);
      printf("%7.2f", value[i]);
      /* fprintf(stderr, "%lx\n", value[i]); */
    }
    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
