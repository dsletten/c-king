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
 *      220105  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define QUIZZES 5
#define STUDENTS 5

int main(void) {
  int student_sums[STUDENTS] = {0};
  int quiz_sums[QUIZZES] = {0};
  int quiz_mins[QUIZZES];
  int quiz_maxs[QUIZZES] = {0};
  
  for (int quiz = 0; quiz < QUIZZES; quiz++) {
    quiz_mins[quiz] = 200;
  }

  for (int student = 0; student < STUDENTS; student++) {
    printf("Enter quiz grades for student %d: ", student + 1);
    for (int quiz = 0; quiz < QUIZZES; quiz++) {
      int grade;
      int count = scanf("%d", &grade);
      if ( count != 1  ||  grade < 0  ||  grade > 100 ) {
        fprintf(stderr, "Invalid input.\n");
        exit(EXIT_FAILURE);
      }
      student_sums[student] += grade;
      quiz_sums[quiz] += grade;

      if ( grade < quiz_mins[quiz] ) {
	quiz_mins[quiz] = grade;
      }

      if ( grade > quiz_maxs[quiz] ) {
	quiz_maxs[quiz] = grade;
      }
    }
  }

  for (int student = 0; student < STUDENTS; student++) {
    printf("Student %d quiz total: %2d\n", (student + 1), student_sums[student]);
    printf("        quiz average: %.2f\n", ((double) student_sums[student]) / QUIZZES);
  }

  printf("\n");
  
  for (int quiz = 0; quiz < QUIZZES; quiz++) {
    printf("Quiz %d high: %2d\n", (quiz + 1) , quiz_maxs[quiz]);
    printf("        low: %2d\n", quiz_mins[quiz]);
    printf("    average: %.2f\n", ((double) quiz_sums[quiz]) / STUDENTS);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
