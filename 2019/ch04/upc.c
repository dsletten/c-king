/*
 *
 *   File:
 *      upc.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190808  Original.
 *
 *
 * "0" "24600" "01003" 0 // Morton's salt
 * "0" "37000" "00407" 3 // Jif peanut butter
 * "0" "31200" "01005" 6 // Ocean Spray cranberry sauce
 * "0" "50428" "26851" 3 // C notebook
 * "0" "37466" "08331" 5 // Lindt chocolate
 * "0" "52000" "04144" 6 // Gatorade
 * "8" "53480" "01000" 3 // MEG
 * "0" "77890" "17079" 3 // Wegmans tea
 * "0" "12345" "67890" 5 // Beakman & Jax!
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

  printf("Enter product type: ");
  scanf("%1d", &d);
  printf("Enter manufacturer's code: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter product code: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;

  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  exit(EXIT_SUCCESS);
}
