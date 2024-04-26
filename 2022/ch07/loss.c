/*
 *
 *   File:
 *      loss.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230430  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  {
    int i = 536870911; // (1- (expt 2 29))
    float f = 2;
    double d = 2;

    printf("Correct: %d\n", 2 * i);
    printf("Float:   %d\n", (int) (f * i));
    printf("Double:  %d\n", (int) (d * i));
  }

  {
    int i = 536870812; // (- (expt 2 29) 100)
    float f = 2;
    double d = 2;

    printf("Correct: %d\n", 2 * i);
    printf("Float:   %d\n", (int) (f * i));
    printf("Double:  %d\n", (int) (d * i));
  }

  {
    long int l = 1125899906842623L; //  (1- (expt 2 50))
    float f = 2;
    double d = 2;

    printf("Correct: %ld\n", 2 * l);
    printf("Float:   %ld\n", (long) (f * l));
    printf("Double:  %ld\n", (long) (d * l));
  }

  {
    long int l = 1125899906842524L; //  (- (expt 2 50) 100)
    float f = 2;
    double d = 2;

    printf("Correct: %ld\n", 2 * l);
    printf("Float:   %ld\n", (long) (f * l));
    printf("Double:  %ld\n", (long) (d * l));
  }

  exit(EXIT_SUCCESS);
}
