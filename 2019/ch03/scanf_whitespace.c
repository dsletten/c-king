/*
 *
 *   File:
 *      scanf_whitespace.c
 *
 *   Synopsis:
 *      Exercise 3.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190731  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, k;
  float x, y;
  
  /* (a) "%d" == " %d" */
  /* scanf(" %d    %d", &i, &j); */
  /* printf("%d %d\n", i, j); */

  /* scanf("%d", &i); */
  /* printf("%d\n", i); */

  /* scanf("%d-%d-%d", &i, &j, &k); */
  /* printf("%d %d %d\n", i, j, k); */

  /* (b) "%d-%d-%d" != "%d -%d -%d" */
  /* --Both match "8-9-10" and "8- 9- 10" */
  /* --Only 2nd matches "8 - 9 - 10" */
  /* scanf("%d -%d -%d", &i, &j, &k); */
  /* printf("%d %d %d\n", i, j, k); */

  /* (c) "%f" != "%f " */
  /* --The 2nd requires non-whitespace to terminate */
  /* scanf("%f ", &x); */
  /* printf("%f\n", x); */

  /* (d) "%f,%f" == "%f, %f" */
  /* --Both match "2.4,8.7" and "2.4, 8.7" */
  int result = scanf("%f,%f", &x, &y);
  printf("scanf says: %d\n", result);
  printf("%f %f\n", x, y);

  exit(EXIT_SUCCESS);
}
