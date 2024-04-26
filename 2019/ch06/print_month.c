/*
 *
 *   File:
 *      print_month.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_int(char *prompt, int min, int max);
int get_length();
int get_start();

int main(void) {
  int month_length = get_length();
  int start_day = get_start();

  int i;
  for (i = 1; i < start_day; i++) {
    printf("   ");
  }

  int day;
  for (day = 1; day <= month_length; day++, i++) {
    printf("%2d ", day);

    if ( i % 7 == 0 ) {
      printf("\n");
    }
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}

int get_int(char *prompt, int min, int max) {
  int n;
  printf("%s", prompt);
  int count = scanf("%d", &n);

  if ( count != 1 ) {
    while ( getchar() != '\n');
    return get_int(prompt, min, max);
  } else if ( n < min  ||  n > max ) {
    return get_int(prompt, min, max);
  } else {
    return n;
  }
}

int get_length() {
  return get_int("Enter number of days in month: ", 1, 31);
}

int get_start() {
  return get_int("Enter starting day of the week (1=Sun, 7=Sat): ", 1, 7);
}
