/*
 *
 *   File:
 *      upc.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240505  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
  int first_sum, second_sum;
  int check_sum;

  printf("Enter UPC (12 digits): ");
  int count = scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

  if ( count == 12 ) {
    first_sum = d0 + d2 + d4 + d6 + d8 + d10;
    second_sum = d1 + d3 + d5 + d6 + d7 + d9;
    check_sum = 9 - ((first_sum * 3 + second_sum - 1) % 10);
    
    printf("Check sum %s correct.\n", check_sum == d11 ? "is" : "is not");
  
    exit(EXIT_SUCCESS);
  } else {
    fprintf(stderr, "Bad input.\n");

    exit(EXIT_FAILURE);
  }
}
