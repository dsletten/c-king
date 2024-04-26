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
 *      211007  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int shares;
  printf("Enter number of shares: ");
  int share_count = scanf("%d", &shares);

  double price_per_share;
  printf("Enter price per share: ");
  int price_count = scanf("%lf", &price_per_share);

  double value = shares * price_per_share;
  double commission;
  if ( (share_count + price_count) != 2  ||  shares <= 0  ||  price_per_share <= 0 ) {
    printf("You're outta here!\n");
  } else if ( value < 2500 ) {
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

  if ( commission < 39 ) {
    commission = 39;
  }

  double rival;
  if ( shares < 2000 ) {
    rival = 33 + 0.03 * shares;
  } else {
    rival = 33 + 0.02 * shares;
  }

  printf("Commission: $%.2lf\n", commission);
  printf("Competitor: $%.2lf\n", rival);

  exit(EXIT_SUCCESS);
}
