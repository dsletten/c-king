/*
 *
 *   File:
 *      grades.c
 *
 *   Synopsis: Exercise 12
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230726  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define N 5

int main(void) {
  int grades[N][N];

  for (int student = 0; student < N; student++) {
    printf("Enter quiz grades for student %d: ", student + 1);
    for (int quiz = 0; quiz < N; quiz++) {
      grades[student][quiz] = get_int_in_range(NULL, 0, 100);
    }
  }

  int student_sums[N] = {0};
  int quiz_sums[N] = {0};
  int quiz_highs[N];
  int quiz_lows[N];
  for (int quiz = 0; quiz < N; quiz++) {
    quiz_highs[quiz] = -1;
    quiz_lows[quiz] = 101;
  }
  
  for (int student = 0; student < N; student++) {
    for (int quiz = 0; quiz < N; quiz++) {
      int grade = grades[student][quiz];
      student_sums[student] += grade;
      quiz_sums[quiz] += grade;

      if ( quiz_highs[quiz] < grade ) {
        quiz_highs[quiz] = grade;
      }

      if ( quiz_lows[quiz] > grade ) {
        quiz_lows[quiz] = grade;
      }
    }
  }

  printf("Student results:\n");
  for (int student = 0; student < N; student++) {
    printf("%d Total: %d Average: %.2f\n", student + 1, student_sums[student], ((double) student_sums[student]) / N);
  }
  printf("\n");

  printf("Quiz results:\n");
  for (int quiz = 0; quiz < N; quiz++) {
    printf("%d Average: %.2f High: %d Low: %d\n", quiz + 1, ((double) quiz_sums[quiz]) / N, quiz_highs[quiz], quiz_lows[quiz]);
  }
  printf("\n");

  exit(EXIT_SUCCESS);
}
