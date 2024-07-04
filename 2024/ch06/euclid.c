/*
 *
 *   File:
 *      euclid.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240611  Original.
 *
 */
#include "euclid.h"

int gcd(int m, int n) {
  if ( n == 0 ) {
    return abs(m);
  } else {
    return gcd(n, m % n);
  }
}
