/*
 *
 *   File:
 *      broker.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240519  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "read_num.h"

#define MINIMUM_COMMISSION 39.0

/* int get_non_negative_int(char* prompt); */
/* int get_non_negative_double(char* prompt); */    // D'oh!! double

int main(void) {
  /* int shares = get_non_negative_int("Enter number of shares traded: "); */
  /* double share_price = get_non_negative_double("Enter share price: "); */

  int shares = read_int("Enter number of shares traded: ", 0, 100000);
  double share_price = read_double("Enter share price: ", 0, 10000);

  double value = shares * share_price;
  double commission;

  if ( value < 2500 ) {
      commission = 30 + 0.017 * value;
  } else if ( value < 6250 ) {
       commission = 56 + 0.0066 * value;
  } else if ( value < 20000 ) {
       commission = 76 + 0.0034 * value;
  } else if ( value < 50000 ) {
       commission = 100 + 0.0022 * value;
  } else if ( value < 500000 ) {
       commission = 155 + 0.0011 * value;
  } else {
       commission = 255 + 0.0009 * value;
  }

  if ( commission < MINIMUM_COMMISSION ) {
    commission = MINIMUM_COMMISSION;
  }

  printf("Commission: $%.2f\n", commission);

  exit(EXIT_SUCCESS);
}

/* int get_non_negative_int(char* prompt) { */
/*   printf(prompt); */

/*   int n; */
/*   int count = scanf("%d", &n); */

/*   if ( count == 1  &&  n >= 0 ) { */
/*     return n; */
/*   } else { */
/*     while ( getchar() != '\n' ); */
/*     return get_non_negative_int(prompt); */
/*   } */
/* } */

/* int get_non_negative_double(char* prompt) { */
/*   printf(prompt); */

/*   double x; */
/*   int count = scanf("%lf", &x); */

/*   if ( count == 1  &&  x >= 0 ) { */
/*     return x; */
/*   } else { */
/*     while ( getchar() != '\n' ); */
/*     return get_non_negative_double(prompt); */
/*   } */
/* } */
