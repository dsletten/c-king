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
 *      200104  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_grade() {
  int grade;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if ( grade < 0  ||  grade > 100 ) {
    return get_grade();
  } else {
    return grade;
  }
}

int main(void) {
  int grade = get_grade();
  
  printf("Letter grade: ");
  
  switch ( grade / 10 ) {
    case 10: case 9: 
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

  exit(EXIT_SUCCESS);
}
