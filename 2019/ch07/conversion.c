/*
 *
 *   File:
 *      conversion.c
 *
 *   Synopsis:
 *      Explore implicit conversions and cast.
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200128  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //    Compiler adds these constant values!!!
  /* printf("int + float: %.15f\n", 13 + 94.7F); */
  /* printf("int + double: %.15f\n", 13 + 94.7); */

  /* int i = 13; */
  /* float f = 94.7F; */
  /* double d = 94.7; */

  /* printf("int + float: %.15f\n", i + f); */
  /* printf("int + double: %.15f\n", i + d); */

  short si = 1;
  int i = 1;
  long li = 1;
  unsigned u = 1;
  unsigned long ul = 1;

  float f = 2.5;
  double d = 2.5;
  long double ld = 2.5;

  printf("short + float: %.15f\n", si + f);
  printf("short + double: %.15f\n", si + d);
  printf("short + long double: %.15Lf\n", si + ld);

  printf("int + float: %.15f\n", i + f);
  printf("int + double: %.15f\n", i + d);
  printf("int + long double: %.15Lf\n", i + ld);

  printf("long + float: %.15f\n", li + f);
  printf("long + double: %.15f\n", li + d);
  printf("long + long double: %.15Lf\n", li + ld);

  printf("unsigned + float: %.15f\n", u + f);
  printf("unsigned + double: %.15f\n", u + d);
  printf("unsigned + long double: %.15Lf\n", u + ld);

  printf("unsigned long + float: %.15f\n", ul + f);
  printf("unsigned long + double: %.15f\n", ul + d);
  printf("unsigned long + long double: %.15Lf\n", ul + ld);

  printf("double cast to float: %.15f\n", f + (float) d);
  printf("float cast to double: %.15f\n", f + d);
  printf("double cast to long double: %.15Lf\n", d + ld);

  printf("double cast to int: %d\n", (int) d + i);
  printf("float cast to int: %d\n", (int) f + i);

  long big_long = 576460752303423487L;
  f = 2.4;

  printf("Actual long value: %ld\n", big_long);
  printf("long * float (loss of precision): %.15f\n", f * big_long);
  printf("long * double cast to float (loss of precision): %.15f\n", (float) (2.4 * big_long));
  printf("long * double (loss of precision): %.15f\n", 2.4 * big_long);
  printf("long * long double (slight loss of precision): %.15Lf\n", 2.4L * big_long);

  d = 10.5;
  d++;

  printf("Incremented double: %f\n", d);

  i = 5;
  d = d + (i * f);

  printf("Compound expression final type double: %f\n", d);

  //
  //    King's test pg. 126
  //    
  int signed_i = -10;
  unsigned unsigned_i = 10;

  if ( signed_i < unsigned_i ) { // unsigned int won't necessarily fit in int -> coerce int to unsigned.
				 // In fact, < translated as cmp instruction: jae
				 // (Actually signed_i < unsigned_i -> cmp unsigned_i, signed_i -> jbe  !?!?)
    printf("Duh: -10 < 10\n");
  } else {
    printf("D'oh! This is C.\n");
  }

  //
  //    My variant
  //    
  {
    long l = -10;
    long long ll = -10;
    unsigned u = 10;
    unsigned long ul = 10;

    if ( l < u ) {
      printf("Duh: -10 < 10\n");
    } else {
      printf("unsigned\n");
    }

    if ( l < ul ) {
      printf("Duh: -10 < 10\n");
    } else {
      printf("unsigned\n");
    }

    if ( ll < u ) {
      printf("Duh: -10 < 10\n");
    } else {
      printf("unsigned\n");
    }

    if ( ll < ul ) {
      printf("Duh: -10 < 10\n");
    } else {
      printf("unsigned\n");
    }
  }

  //
  //    CARM pg. 198
  //    
  {
    unsigned ui = -1; // WTF?!?
    long int li = 0;

    if ( ui < li ) {
      printf("long+unsigned -> long\n");
    } else {
      printf("long+unsigned -> unsigned\n");
    }
  }

  //
  //    Assignment conversions 
  {
    char c = 'a';
    int i = c;
    float f = i;
    double d = f;

    c = 10000;
    i = 1.0e20;
    f = 1.0e100;
    printf("c: %c i: %d f: %f\n", c, i, f);
  }

  //
  //    Casts
  //    
  {
    double d = 1.234;
    double fraction = d - (int) d;
    printf("Fraction: %f\n", fraction);
    fraction = d - (long) d;
    printf("Fraction: %f\n", fraction);

    int i = (int) 2.4; // Redundant
    int j = 2.4;

    int m = 7;
    int n = 3;
    double r = m / n;
    printf("%f\n", r);
    r = (double) m / n;
    printf("%f\n", r);
    r = (double) m / (double) n; // Redundant
    printf("%f\n", r);

    i = 200000;
    long product = i * i;
    printf("Product: %ld\n", product); // (format t "~D~%" (mod (* 200000 200000) (expt 2 32))) => 1345294336
    product = (long) i * i;
    printf("Product: %ld\n", product);
  }

  exit(EXIT_SUCCESS);
}
