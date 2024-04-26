/*
 *
 *   File:
 *      days_of_week.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200517  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

char days_of_week_array[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
char *days_of_week_pointers[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(void) {
  printf("The first day of the week is: %s\n", days_of_week_array[0]);
  printf("The first letter of the first day of the week is: %c\n", days_of_week_array[0][0]);

  printf("The second day of the week is: %s\n", days_of_week_pointers[1]);
  printf("The second letter of the second day of the week is: %c\n", days_of_week_pointers[1][1]);

  exit(EXIT_SUCCESS);
}
