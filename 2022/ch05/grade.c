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
 *      221130  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

char grade_to_letter(int grade);

int main(void) {
  printf("Enter numerical grade: ");
  int grade;
  int count = scanf("%d", &grade);

  if ( count != 1  ||  grade < 0  ||  grade > 100 ) {
    fprintf(stderr, "You're outta here!\n");
    exit(EXIT_FAILURE);
  } else {
    char letter_grade = grade_to_letter(grade);

    printf("Letter grade: %c\n", letter_grade);
    
    exit(EXIT_SUCCESS);
  }
}

char grade_to_letter(int grade) {
  switch ( grade / 10 ) {
    case 10:
    case 9:
      return 'A';
    case 8:
      return 'B';
    case 7:
      return 'C';
    case 6:
      return 'D';
    default:
      return 'F';
  }
}
        
