/*
 *
 *   File:
 *      exercises.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200420  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define INVALID_DIGIT -1

double triangle_area(double base, double height);
bool check(int x, int y, int n);
int gcd(int m, int n);
int num_digits(int n);
int digit(int n, int k);

int main(void) {
  printf("%d\n", check(2, 3, 4));
  printf("%d\n", check(2, 3, 3));

  /* printf("GCD of %d and %d is %d\n",  */
  printf("%s\n", gcd(12, 28) == 4 ? "true" : "false");
  printf("%s\n", gcd(60, 42) == 6 ? "true" : "false");
  printf("%s\n", gcd(3333, -33) == 33 ? "true" : "false");
  printf("%s\n", gcd(3333, 1002001) == 11? "true" : "false");
  printf("%s\n", gcd(91, -49) == 7 ? "true" : "false");
  printf("%s\n", gcd(63, -42) == 21 ? "true" : "false");
  printf("%s\n", gcd(63, 35) == 7 ? "true" : "false");

  int test_numbers[] = {0, 3, 76, 492, 8871, 64201, 991238193};

  for (int i = 0; i < sizeof test_numbers / sizeof test_numbers[0]; i++) {
    int n = test_numbers[i];
    int digit_count = num_digits(n);

    printf("Number of digits in %d: %d --> %s\n", n, digit_count, (digit_count == (int) ceil(log10(n)) ? "=" : "X"));
  }

  printf("Digit %d of %d: %d\n", 1, 829, digit(829, 1));
  printf("Digit %d of %d: %d\n", 2, 829, digit(829, 2));
  printf("Digit %d of %d: %d\n", 3, 829, digit(829, 3));
  printf("Digit %d of %d: %d\n", 4, 829, digit(829, 4));

  exit(EXIT_SUCCESS);
}

double triangle_area(double base, double height) {
  return 0.5 * base * height;
}

//
//    This works if n > 0 and x, y are non-negative.
//    
bool check(int x, int y, int n) {
  return x % n == x && y % n == y;
}

int gcd(int m, int n) {
  if ( m < 0 ) {
    m = -m;
  }

  if ( n < 0 ) {
    n = -n;
  }

  while ( n != 0 ) {
    int temp = n;
    n = m % n;
    m = temp;
  }
  
  return m;
}

/*
 *    Check against: ceil(log10(n)) see main() <-- D'oh!! floor(log10(n)) + 1
 */
int num_digits(int n) {
  if ( n < 0 ) {
    printf("Naughty...\n");
    return 0;
  } else if ( n == 0 ) {
    return 1;
  } else {
    int i = 0;

    while ( n > 0 ) {
      n /= 10;
      i++;
    }

    return i;
  }
}

int do_digit(int n, int k) {
  if ( n == 0 ) {
    return INVALID_DIGIT;
  } else if ( k == 1 ) {
    return  n % 10;
  } else {
    return do_digit(n / 10, k - 1);
  }
}

int digit(int n, int k) {
  if ( n < 0  ||  k <= 0 ) {
    printf("Naughty...\n");
    return INVALID_DIGIT;
  } else {
    return do_digit(n, k);
  }
}

/* int digit(int n, int k) { */
/*   if ( n < 0  ||  k <= 0 ) { */
/*     printf("Naughty...\n"); */
/*     return -1; */
/*   } else { */
/*     while ( true ) { */
/*       if ( n == 0 ) { */
/*         return -1; */
/*       } else if ( k == 1 ) { */
/*         return  n % 10; */
/*       } */

/*       k--; */
/*       n /= 10; */
/*     } */
/*   } */
/* } */
