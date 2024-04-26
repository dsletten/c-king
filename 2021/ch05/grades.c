/*
 *
 *   File:
 *      grades.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211011  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int grade;
  printf("Enter numerical grade: ");
  int count = scanf("%d", &grade);
  
  if ( count != 1  ||  grade < 0  || grade > 100 ) {
    printf("You fail!\n");
  } else {
    printf("Letter grade: ");
    switch ( grade / 10 ) {
      case 10:
      case 9:
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
