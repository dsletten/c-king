/*
 *
 *   File:
 *      volume.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190725  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://www.gnu.org/software/libc/manual/html_node/Mathematical-Constants.html
//#define PI 3.141592653589793
//           3.14159265358979323846264338327950288  !!
///Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/math.h
//#define M_PI        3.14159265358979323846264338327950288   /* pi             */

int main(void) {
  double radius;
  printf("Enter radius: ");
  scanf("%lf", &radius);

  double volume = (4.0/3.0) * M_PI * radius * radius * radius;

  printf("Volume of sphere with radius %f: %f\n", radius, volume);
  
  exit(EXIT_SUCCESS);
}
