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
 *      200213  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  {
    //
    //    1.
    //    
    printf("%d %d %d\n", 077, 0x77, 0XABC);
  }

  {
    //
    //    3.
    //    
    printf("%f\n", 010E2);
    printf("%f\n", 02.7);
    printf("%f\n", 007.);
    printf("%f\n", 32.1E+5);
    printf("%f\n", 3.978e-2);
  }

  {
    //
    //    6.
    //    
    char c = 'a';
    int i = 5;

    i += c;
    printf("%d\n", i);

    c = 2 * c - 1;
    printf("%c\n", c);
    printf("%d\n", c);

    putchar(c);
    //    printf(c); // Core dump!
  }

  {
    //
    //    14.
    //    
    int i;
    long j;
    unsigned int k;
    printf("%lu\n", (unsigned long) sizeof(j * k));
    printf("%lu\n", (unsigned long) sizeof((int) j * k));
    printf("%lu\n", (unsigned long) sizeof(i + (int) j * k));

  }

  {
    //
    //    15.
    //
    int i = 10;
    float f = 20;
    double d = 30;

    double result = i * f / d;
  }

  {
    //
    //    16.
    //
    int i = 10;
    float f = 20;
    double d = i + f;
  }

  {
    //
    //    17.
    //
    char c = '\1';
    short int s = 2;
    int i = -3;
    long int m = 5;
    float f = 6.5;
    double d = 7.5;

    int ex1 = c * i;
    long int ex2 = s + m;
    float ex3 = f / c;
    double ex4 = d / s;
    double ex5 = f - d;
    int ex6 = (int) f;
  }
  
  {
    //
    //    18.
    //    
    float f = 1.2345e9;
    double d = 1.2345e9;
    
    float frac_f = f - (int) f;
    printf("%e -> %d + %e\n", f, (int) f, frac_f);

    double frac_d = d - (int) d;
    printf("%e -> %d + %e\n", d, (int) d, frac_d);

    double whole;
    double fraction = modf(f, &whole);
    printf("%e -> %e + %e\n", f, whole, fraction);

    fraction = modf(d, &whole);
    printf("%e -> %e + %e\n", d, whole, fraction);
  }
    
  exit(EXIT_SUCCESS);
}
