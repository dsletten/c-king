/*
 *
 *   File:
 *      overflow.c
 *
 *   Synopsis: See King 129 页
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230503  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 200000;
    long product = i * i;
    printf("Product: %ld\n", product); // (format t "~D~%" (mod (* 200000 200000) (expt 2 32))) => 1345294336
    product = (long) i * i;
    printf("Product: %ld\n", product);

  exit(EXIT_SUCCESS);
}
