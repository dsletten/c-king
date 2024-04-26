/*
 *
 *   File:
 *      median.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200423  Original.
 *
 *
 *      Ugh! Floating-point mess...See pensoj 200424
 *
 *    Cases:
 *    1. All 3 values equal x = y = z. Any value serves as median.
 *    2. Only 2 values are equal:
 *      a. x = y, z is either > or <
 *      b. x = z, y is either > or <
 *      c. y = z, x is either > or <
 *    3. All 3 values are distinct:
 *      a. y < x < z or z < x < y  x is median
 *      b. x < y < z or z < y < x  y is median
 *      c. x < z < y or y < z < x  z is median
 *
 *    But considering that whenever 2 values are the same, either of those
 *    serves as the median, we can collapse 2.a. and 3.a.: y <= x < z or z < x <= y
 *    Similarly with 2.b./3.c. and 2.c/3.b:
 *      x <= z < y or y < z <= x
 *      x < y <= z or y y <= z < x
 *
 *    Likewise, the case where all 3 values are equal can be folded in to yield 6 possible conditions:
 *    (y <= x) && (x <= z) x1 x is between y and z
 *    (z <= x) && (x <= y) x2         "
 *    (x <= y) && (y <= z) y1 y is between x and z
 *    (z <= y) && (y <= x) y2         "
 *    (x <= z) && (z <= y) z1 z is between x and y
 *    (y <= z) && (z <= x) z2         "
 *
 *    From first principles:
 *    
 *    Each pair of numbers could be <, = , >. Jointly this leads to several impossible combinations of all 3 values,
 *    indicated by a dash below. There are then 13 possible relationships among the three numbers.
 *    The penultimate column indicates which value(s) could be the median. The final column
 *    shows which corresponding "is between" conditions above are consistent with that value. It is clear that
 *    the 6 "is between" conditions cover all cases below.
 *    
 *    (x < y) && (y < z) && (x < z)      x < y < z  y     y1
 *    (x < y) && (y < z) && (x = z)      -
 *    (x < y) && (y < z) && (x > z)      -
 *    (x < y) && (y = z) && (x < z)      x < y = z  y/z   y1/z1
 *    (x < y) && (y = z) && (x = z)      -
 *    (x < y) && (y = z) && (x > z)      -
 *    (x < y) && (y > z) && (x < z)      x < z < y  z     z1
 *    (x < y) && (y > z) && (x = z)      x = z < y  x/z   x2/z1
 *    (x < y) && (y > z) && (x > z)      z < x < y  x     x2
 *    
 *    (x = y) && (y < z) && (x < z)      x = y < z  x/y   x1/y1
 *    (x = y) && (y < z) && (x = z)      -
 *    (x = y) && (y < z) && (x > z)      -
 *    (x = y) && (y = z) && (x < z)      -
 *    (x = y) && (y = z) && (x = z)      x = y = z  x/y/z x1/x2/y1/y2/z1/z2
 *    (x = y) && (y = z) && (x > z)      -
 *    (x = y) && (y > z) && (x < z)      -
 *    (x = y) && (y > z) && (x = z)      -
 *    (x = y) && (y > z) && (x > z)      x = y > z  x/y   x1/y1
 *    
 *    (x > y) && (y < z) && (x < z)      y < x < z  x     x1
 *    (x > y) && (y < z) && (x = z)      y < x = z  x/z   x1/z2
 *    (x > y) && (y < z) && (x > z)      y < z < x  z     z2
 *    (x > y) && (y = z) && (x < z)      -
 *    (x > y) && (y = z) && (x = z)      -
 *    (x > y) && (y = z) && (x > z)      y = z < x  y/z   y2/z2
 *    (x > y) && (y > z) && (x < z)      -
 *    (x > y) && (y > z) && (x = z)      -
 *    (x > y) && (y > z) && (x > z)      z < y < x  y     y2
 *
 *    Another way to approach this analysis is by considering three possible values: S = {1, 2, 3}, i.e., low, medium, high.
 *    The Cartesian product of S X S X S yields 27 ordered triples along with their corresponding median values:
 *    
 *    (dolist (x '(1 2 3)) (dolist (y '(1 2 3)) (dolist (z '(1 2 3)) (format t "~D,~D,~D -> ~D~%" x y z (median x y z)))))
 *    1,1,1 -> 1
 *    1,1,2 -> 1
 *    1,1,3 -> 1
 *    1,2,1 -> 1
 *    1,2,2 -> 2
 *    1,2,3 -> 2
 *    1,3,1 -> 1
 *    1,3,2 -> 2
 *    1,3,3 -> 3
 *    2,1,1 -> 1
 *    2,1,2 -> 2
 *    2,1,3 -> 2
 *    2,2,1 -> 2
 *    2,2,2 -> 2
 *    2,2,3 -> 2
 *    2,3,1 -> 2
 *    2,3,2 -> 2
 *    2,3,3 -> 3
 *    3,1,1 -> 1
 *    3,1,2 -> 2
 *    3,1,3 -> 3
 *    3,2,1 -> 2
 *    3,2,2 -> 2
 *    3,2,3 -> 3
 *    3,3,1 -> 3
 *    3,3,2 -> 3
 *    3,3,3 -> 3
 *
 *    Despite the fact that there are 27 triples, this is still consistent with the preceding analysis since many of the triples
 *    present redundant cases of the 13 above. For example, (1, 1, 1), (2, 2, 2), (3, 3, 3) obviously are all the case x = y = z.
 *    Likewise, (1, 1, 2), (1, 1, 3), (2, 2, 3) all satisfy x <= y < z. So the 27 cases collapse to the 13 distinct relationships.


 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double median_king(double x, double y, double z);
double median_between(double x, double y, double z);
double median_min_max(double x, double y, double z);
double median3(double x, double y, double z);
double median3a(double x, double y, double z);
double fmedian(double x, double y, double z);

void test(double x, double y, double z);

bool is_between(double x, double y, double z);
bool all_equal(double x, double y, double z);

void compare(double x, double y, double z);

int main(void) {
  {
    double a[] = {1.0, 2.0, 3.0};

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          double x = a[i];
          double y = a[j];
          double z = a[k];
          printf("%f %f %f -> %f [%f]\n", x, y, z, fmedian(x, y, z), median_min_max(x, y, z));
        }
      }
    }
  }

  /* test(1.2, 2.3, 3.4); */
  /* test(1.2, 3.4, 2.3); */

  /* test(2.3, 1.2, 3.4); */
  /* test(2.3, 3.4, 1.2); */

  /* test(3.4, 1.2, 2.3); */
  /* test(3.4, 2.3, 1.2); */

  /* test(1.2, 1.2, 1.2); */

  /* test(1.2, 1.2, 2.3); */
  /* test(1.2, 2.3, 1.2); */
  /* test(2.3, 1.2, 1.2); */

  /* double x = 1.2; */
  /* double y = (x + x + x) / 3.0; // Equal to x */
  /* double z = (x + x + x) * (1.0 / 3.0); // Slightly less than the other 2 */
  /* test(x, y, z); */

  /* /\* printf("%d\n", x == y); *\/ */
  /* /\* printf("%d\n", x > z); *\/ */

  /* /\* compare(1.2, 1.2, 1.2); *\/ */

  exit(EXIT_SUCCESS);
}

void test(double x, double y, double z) {
  printf("Median 1 of [%f, %f, %f] is %.20f\n", x, y, z, median_king(x, y, z));
  printf("Median 2 of [%f, %f, %f] is %.20f\n", x, y, z, median_between(x, y, z));
  printf("Median 2a of [%f, %f, %f] is %.20f\n", x, y, z, median_min_max(x, y, z));
  /* printf("Median 3 of [%f, %f, %f] is %.20f\n", x, y, z, median3(x, y, z)); */
  /* printf("Median 3a of [%f, %f, %f] is %.20f\n", x, y, z, median3a(x, y, z)); */

  /* printf("Agreement: %s\n", all_equal(median_king(x, y, z), median3(x, y, z), median3a(x, y, z)) ? "true" : "false"); */

  /* if ( all_equal(median_king(x, y, z), median3(x, y, z), median3a(x, y, z)) ) { */
  /* if ( all_equal(median_king(x, y, z), median_between(x, y, z), median3(x, y, z)) ) { */
  if ( all_equal(median_king(x, y, z), median_between(x, y, z), median_min_max(x, y, z)) ) {
    printf("Agreement\n");
  } else {
    printf("1/3 %d\n", median_king(x, y, z) == median3(x, y, z));
    printf("1/2 %d\n", median_king(x, y, z) == median_between(x, y, z));
    printf("2/3 %d\n", median_between(x, y, z) == median3(x, y, z));
    /* printf("1/3a %d\n", median_king(x, y, z) == median3a(x, y, z)); */
    /* printf("3/3a %d\n", median3(x, y, z) == median3a(x, y, z)); */
  }
}

/*
 *    King's original version. (Properly formatted!)
 */
double median_king(double x, double y, double z) {
  if ( x <= y ) {
    if ( y <= z ) {
      return y;
    } else if ( x <= z ) {
      return z;
    } else {
      return x;
    }
  }

  if ( z <= y ) {
    return y;
  }

  if ( x <= z ) {
    return x;
  }
  
  return z;
}

double median_between(double x, double y, double z) {
  /* if ( all_equal(x, y, z) ) { */
  /*   return x; // Whatever... */
  /* } else if ( is_between(x, y, z) ) { */
  if ( is_between(x, y, z) ) {
    return x;
  } else if ( is_between(y, x, z) ) {
    return y;
    //  } else if ( is_between(z, x, y) ) { // Why am I having trouble accepting this?!?
  } else {
    return z;
  }
}

bool is_between(double x, double y, double z) {
  return ((y <= x) && (x <= z))  ||  ((z <= x) && (x <= y));
}

double max(double x, double y) {
  if ( x >= y ) {
    return x;
  } else {
    return y;
  }
}

double min(double x, double y) {
  if ( x <= y ) {
    return x;
  } else {
    return y;
  }
}

//    Not sure where I came up with this?!? (See fmedian() below.)
double median_min_max(double x, double y, double z) {
  return min(max(min(x, y), z), max(x, y));
}

/*
 *    Crazy version
 *
 *    The actual craziest thing about median3 and median3a is that they _compute_
 *    the value rather than returning one of the args!
 *
 *    Newsflash! This algorithm is wrong since it relies on floating-point equality!!
 *    These values cause the function to return a median of 2.39999999999999991118                 ?????????????????????? Why
 *    This is twice what the median should be!!
 *      double x = 1.2;
 *      double y = (x + x + x) / 3.0; // Equal to x
 *      double z = (x + x + x) * (1.0 / 3.0); // Slightly less than the other 2
 *
 */
double median3(double x, double y, double z) {
  /* printf("3  %.20f\n", (3 - 2 * ((x == y) && (y == z))) / 3.0); */

  return ( ( (((y <= x) && (x <= z)) || ((z <= x) && (x <= y))) * x +
             (((x <= y) && (y <= z)) || ((z <= y) && (y <= x))) * y +
             (((x <= z) && (z <= y)) || ((y <= z) && (z <= x))) * z) *
           (3 - 2 * ((x == y) && (y == z))) / 3.0 *
           (2 - (((x == y) && (x < z)) || ((x == z) && (x < y)) || ((y == z) && (y < x)))) / 2.0);
}

bool all_equal(double x, double y, double z) {
  return (x == y) && (y == z);
}

/*
 *    Broken just like median3 above!!
 */
double median3a(double x, double y, double z) {
  /* printf("3a %.20f\n", (3 - 2 * all_equal(x, y, z)) / 3.0); */

  return ( (is_between(x, y, z) * x + is_between(y, x, z) * y + is_between(z, x, y) * z) *
           /* (3 - 2 * all_equal(x, y, z)) / 3.0 * */
           ((3.0 - 2.0 * all_equal(x, y, z)) / 3.0) *
           ((2 - (((x == y) && (x < z)) || ((x == z) && (x < y)) || ((y == z) && (y < x)))) / 2.0) );
}

double foo1(double x, double y, double z) {
  return ( (((y <= x) && (x <= z)) || ((z <= x) && (x <= y))) * x +
           (((x <= y) && (y <= z)) || ((z <= y) && (y <= x))) * y +
           (((x <= z) && (z <= y)) || ((y <= z) && (z <= x))) * z );
}

double foo2(double x, double y, double z) {
  return (is_between(x, y, z) * x + is_between(y, x, z) * y + is_between(z, x, y) * z);
}

double bar1(double x, double y, double z) {
  return  (3 - 2 * ((x == y) && (y == z)));
  /* return  (3 - 2 * ((x == y) && (y == z))) / 3.0; */
}

double bar2(double x, double y, double z) {
  return (3 - 2 * all_equal(x, y, z));
  /* return (3 - 2 * all_equal(x, y, z)) / 3.0; */
}

double pung1(double x, double y, double z) {
  return (2 - (((x == y) && (x < z)) || ((x == z) && (x < y)) || ((y == z) && (y < x))));
  /* return (2 - (((x == y) && (x < z)) || ((x == z) && (x < y)) || ((y == z) && (y < x)))) / 2.0; */
}

void compare(double x, double y, double z) {
  double f1 = foo1(x, y, z);
  double f2 = foo2(x, y, z);
  
  printf("foo1 %.20f\n", f1);
  printf("foo2 %.20f\n", f2);
  printf("%d\n", f1 == f2);
  
  double b1 = bar1(x, y, z);
  double b2 = bar2(x, y, z);
  
  printf("bar1 %.20f\n", b1);
  printf("bar2 %.20f\n", b2);
  printf("%d\n", b1 == b2);
  
  double p = pung1(x, y, z);

  double median3 = f1 * b1 / 3.0 * p / 2.0;
  double median3a = f2 * (b2 / 3.0) * (p / 2.0);
  
  printf("median3 %.20f\n", median3);
  printf("median3a %.20f\n", median3a);
  printf("%d\n", median3 == median3a);

  printf("%.20f\n", f1);
  printf("%.20f\n", f1 * b1);
  printf(">> %.20f\n", f1 * b1 / 3.0);
  printf("%.20f\n", f1 * b1 / 3.0 * p);
  printf("%.20f\n", f1 * b1 / 3.0 * p / 2.0);

  printf("%.20f\n", f2);
  printf(">> %.20f\n", f2 * (b2 / 3.0));
  printf("%.20f\n", f2 * (b2 / 3.0) * (p / 2.0));
}

//    Median is the maximum of all of the pairwise minimums: (max (min a b) (min b c) (min c a))
//    Winston uses the symmetric alternative: (min (max a b) (max b c) (max c a))
double fmedian(double x, double y, double z) {
  return fmax(fmax(fmin(x, y), fmin(x, z)), fmin(y, z));
}
