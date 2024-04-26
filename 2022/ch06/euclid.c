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
 *      221228  Original.
 *
 */
#include "euclid.h"

int euclid(int m, int n) {
  if ( n == 0 ) {
    return abs(m);
  } else {
    return euclid(n, m % n);
  }
}
