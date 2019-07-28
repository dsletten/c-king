/*
 *
 *   File:
 *      junk.c
 *
 *   Synopsis:
 *       Print uninitialized variables!
 *       
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190726  Original.
 *
 *
 *    Compiler detects!!      
 * junk.c:23:25: warning: variable 'i' is uninitialized when used here [-Wuninitialized] 
 *   printf("int i: %d\n", i); 
 *                         ^ 
 * junk.c:19:8: note: initialize the variable 'i' to silence this warning 
 *   int i, j; 
 *        ^ 
 *         = 0 
 * junk.c:24:25: warning: variable 'j' is uninitialized when used here [-Wuninitialized] 
 *   printf("int j: %d\n", j); 
 *                         ^ 
 * junk.c:19:11: note: initialize the variable 'j' to silence this warning 
 *   int i, j; 
 *           ^ 
 *            = 0 
 * junk.c:25:27: warning: variable 'x' is uninitialized when used here [-Wuninitialized] 
 *   printf("float x: %f\n", x); 
 *                           ^ 
 * junk.c:20:10: note: initialize the variable 'x' to silence this warning 
 *   float x; 
 *          ^ 
 *           = 0.0 
 * junk.c:26:28: warning: variable 'y' is uninitialized when used here [-Wuninitialized] 
 *   printf("double y: %f\n", y); 
 *                            ^ 
 * junk.c:21:11: note: initialize the variable 'y' to silence this warning 
 *   double y; 
 *           ^ 
 *            = 0.0 
 * 4 warnings generated. 
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;
  float x;
  double y;

  printf("int i: %d\n", i);
  printf("int j: %d\n", j);
  printf("float x: %f\n", x);
  printf("double y: %f\n", y);
  
  exit(EXIT_SUCCESS);
}
