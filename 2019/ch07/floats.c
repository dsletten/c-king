/*
 *
 *   File:
 *      floats.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200118  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

int main(void) {
  printf("%e\n", FLT_MIN);
  printf("%e\n", FLT_MAX);

  printf("%e\n", DBL_MIN);
  printf("%e\n", DBL_MAX);

  printf("%Le\n", LDBL_MIN);
  printf("%Le\n", LDBL_MAX);

  long double pi = M_PI;
  printf("%.*Lg\n", LDBL_DIG, pi);

  pi /= 1000;
  printf("%.10Le\n", pi);
  printf("%.15Le\n", pi);
  printf("%.20Le\n", pi);
  printf("%.25Le\n", pi);

  printf("%le %llx\n", M_PI, M_PI);

  //
  //    Hex literals (C99)!!
  //    
  printf("%f\n", 0x39.0P0);
  printf("%f\n", 0x39p0);

  exit(EXIT_SUCCESS);
}
