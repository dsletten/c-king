/*
 *
 *   File:
 *      float_constants.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240629  Original.
 *
 *      https://stackoverflow.com/questions/25209576/c-float-assignment-from-literal
 *
 *      Avoid using `double` constants to initialize `float` variables:
 *      (rational 1.01161128282547) => 8486011/8388608
 *      (rational 1.01161128282547d0) => 16972021/16777216
 *
 *      I.e., 8486011   16972022   16972021
 *            ------- = -------- > --------
 *            8388608   16777216   16777216
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float f1 = 1.01161128282547f;
  float f2 = (float) 1.01161128282547;

  printf("%.7f\n", f1);
  printf("%.7f\n", f2);

  exit(EXIT_SUCCESS);
}

/* shell> Double.doubleToRawLongBits(0.1f) */
/* $9 ==> 4591870180174331904 */

/* jshell> Double.doubleToRawLongBits(0.1) */
/* $10 ==> 4591870180066957722 */

/* jshell> Float.floatToRawIntBits(1.01161128282547f) */
/* $11 ==> 1065450619 */

/* jshell> Float.floatToRawIntBits((float)1.01161128282547) */
/* $12 ==> 1065450618 */



