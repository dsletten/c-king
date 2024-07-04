/*
 *
 *   File:
 *      grade.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240521  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "read_num.h"

int main(void) {
  int grade = read_int_("Enter numerical grade: ");

  if ( grade < 0  ||  grade > 100 ) {
    fprintf(stderr, "That is a really bad grade!\n");
    exit(EXIT_FAILURE);
  } else {
    printf("Letter grade: ");

    switch ( grade / 10 ) {
      case 9:
      case 10:
        printf("A");
        break;

      case 8:
        printf("B");
        break;

      case 7:
        printf("C");
        break;

      case 6:
        printf("D");
        break;

      default:
        printf("F");
    }

    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
