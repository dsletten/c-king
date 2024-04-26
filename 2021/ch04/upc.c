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
 *      210827  Original.
 *
 */
#include "upc.h"

#define DIGITS 12

bool in_range(int n);

bool validate_check_digit(int upc_digits[]) {
  int first_sum = 0;
  int second_sum = 0;

  //  for (int i = 0; i < DIGITS; i++) {
  for (int i = 0; i < DIGITS - 1; i++) {
    if ( !in_range(upc_digits[i]) ) {
      return false;
    } else {
      if ( i % 2 == 0 ) {
        first_sum += upc_digits[i];
      /* } else if ( i < DIGITS - 1 ) { */
      } else {
        second_sum += upc_digits[i];
      }
    }
  }
  
  int check_digit = upc_digits[DIGITS-1];
  
  int total = 3 * first_sum + second_sum;
  int computed_check_digit = 9 - ((total - 1) % 10);
  
  return check_digit == computed_check_digit;
}

bool in_range(int n) {
  return n >= 0  &&  n <= 9;
}
