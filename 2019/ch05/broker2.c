/*
 *
 *   File:
 *      broker2.c
 *
 *   Synopsis:
 *      Modified King's broker.c for exercise 7.
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200104  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MINIMUM_COMMISSION 39.0
#define MAX_SHARES 1000000

int get_shares();
double get_share_price();
double get_commission(double value);
double compute_commission(double base, double rate, double value);
double get_rival_commission(int shares);

int main(void) {
  int shares = get_shares();
  double share_price = get_share_price();
  double value = shares * share_price;

  double commission = get_commission(value);

  if ( commission < MINIMUM_COMMISSION ) {
    commission = MINIMUM_COMMISSION;
  }
  
  double rival_commission = get_rival_commission(shares);

  printf("Commission: $%.2f\n", commission);
  printf("The other guy would charge you: $%.2f\n", rival_commission);

  exit(EXIT_SUCCESS);
}

int get_shares() {
  int shares;

  do {
    printf("Enter number of shares: ");
    scanf("%d", &shares);
  } while ( shares < 0 || shares > MAX_SHARES );
  
  return shares;
}

double get_share_price() {
  double price;

  do {
    printf("Enter share price: ");
    scanf("%lf", &price);
  } while ( price < 0 );

  return price;
}

double get_commission(double value) {
  if ( value < 2500 ) {
    return compute_commission(30, 0.017, value);
  } else if ( value < 6250 ) {
    return compute_commission(56, 0.0066, value);
  } else if ( value < 20000 ) {
    return compute_commission(76, 0.0034, value);
  } else if ( value < 50000 ) {
    return compute_commission(100, 0.0022, value);
  } else if ( value < 500000 ) {
    return compute_commission(155, 0.0011, value);
  } else {
    return compute_commission(255, 0.0009, value);
  }
}

double compute_commission(double base, double rate, double value) {
  return base + rate * value;
}

double get_rival_commission(int shares) {
  double base_commission = 33;
  if ( shares < 2000 ) {
    return base_commission + 0.03 * shares;
  } else {
    return base_commission + 0.02 * shares;
  }
}
