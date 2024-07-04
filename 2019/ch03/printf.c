/*
 *
 *   File:
 *      printf.c
 *
 *   Synopsis:
 *       Experiments with printf()
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191206  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
//#include <math.h>

int main(void) {
  int i = 3;
  double x = M_PI;

  //  printf("A whole lot of %s: %d %d %f\n", "pung", i, i + 7, cos(x));

  printf("%%d\n");
  printf("|%d|\n", 17);
  printf("|%4d|\n", 17);
  printf("|%-4d|\n", 17);
  printf("|%.4d|\n", 17);
  printf("|%5.4d|\n", 17);
  printf("|%-5.4d|\n", 17);
  printf("|%+5.4d|\n", 17);
  printf("|% 5.4d|\n", 17);

  printf("|%9.2d|\n", 17);
  printf("|%2.9d|\n", 17);
  printf("|%5.0d|\n", 17);
  printf("|%5.1d|\n", 17);
  printf("|%5.2d|\n", 17);

  printf("|%d|\n", -17);
  printf("|%4d|\n", -17);
  printf("|%-4d|\n", -17);
  printf("|%.4d|\n", -17);
  printf("|%5.4d|\n", -17);
  printf("|%-5.4d|\n", -17);

  printf("|%9.2d|\n", -17);
  printf("|%2.9d|\n", -17);
  printf("|%5.0d|\n", -17);
  printf("|%5.1d|\n", -17);
  printf("|%5.2d|\n", -17);

  printf("%%e\n");
  printf("|%e|\n", M_PI);
  printf("|%.0e|\n", M_PI);
  printf("|%.10e|\n", M_PI);
  printf("|%.20e|\n", M_PI);
  printf("|%10e|\n", M_PI);
  printf("|%10.0e|\n", M_PI);
  printf("|%20.10e|\n", M_PI);
  printf("|%20.20e|\n", M_PI);
  printf("|%10.1e|\n", 3.6);
  printf("|%10.2e|\n", 3.6);
  printf("|%10.3e|\n", 3.6);
  printf("|%10.4e|\n", 3.6);
  printf("|%010.2e|\n", 3.6);
  printf("|%10.1e|\n", 99.0);
  printf("|%10.2e|\n", 99.0);
  printf("|%10.3e|\n", 99.0);
  printf("|%10.4e|\n", 99.0);

  printf("%%f\n");
  printf("|%f|\n", M_PI);
  printf("|%.0f|\n", M_PI);
  printf("|%.10f|\n", M_PI);
  printf("|%.20f|\n", M_PI);
  printf("|%10f|\n", M_PI);
  printf("|%10.0f|\n", M_PI);
  printf("|%20.10f|\n", M_PI);
  printf("|%20.20f|\n", M_PI);
  printf("|%10.1f|\n", 3.6);
  printf("|%10.2f|\n", 3.6);
  printf("|%10.3f|\n", 3.6);
  printf("|%10.4f|\n", 3.6);
  printf("|%10.1f|\n", 99.0);
  printf("|%10.2f|\n", 99.0);
  printf("|%10.3f|\n", 99.0);
  printf("|%10.4f|\n", 99.0);

  printf("%%g\n");
  printf("|%g|\n", M_PI);
  printf("|%.0g|\n", M_PI); // Meaningless???
  printf("|%.1g|\n", M_PI);
  printf("|%.2g|\n", M_PI);
  printf("|%.10g|\n", M_PI);
  printf("|%.20g|\n", M_PI);
  printf("|%10g|\n", M_PI);
  printf("|%10.0g|\n", M_PI);
  printf("|%20.10g|\n", M_PI);
  printf("|%20.20g|\n", M_PI);
  printf("|%10.1g|\n", 3.6);
  printf("|%10.2g|\n", 3.6);
  printf("|%10.3g|\n", 3.6);
  printf("|%10.4g|\n", 3.6);
  printf("|%10.1g|\n", 99.0);
  printf("|%10.2g|\n", 99.0);
  printf("|%10.3g|\n", 99.0);
  printf("|%10.4g|\n", 99.0);

  printf("|%.4f|\n", 1234.5678);
  printf("|%.4g|\n", 1234.5678);
  printf("|%.8g|\n", 1234.5678);

  x = M_PI;
  for (i = 0; i < 20; i++) {
    printf("%g\n", x);
    x *= 10;
  }
  
  x = M_PI;
  for (i = 0; i < 20; i++) {
    printf("%g\n", x);
    x /= 10;
  }
  
  exit(EXIT_SUCCESS);
}
