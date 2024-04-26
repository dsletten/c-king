/*
 *
 *   File:
 *      day_of_year.c
 *
 *   Synopsis:
 *       King chapter 9, ex. 4
 *       1. First solution uses recursive function to compute how many complete months have passed.
 *       2. Second uses array of month lengths to compute the same thing.
 *       3. Third version uses wacky Julian day number formula. Rock on!
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200415  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NONE 0
#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12

int elapsed_days(int m, int y);
bool is_leap_year(int y);
void print_day_of_year(int month, int day, int year);
int day_of_year(int day, int month, int year);

int main(void) {
  /* printf("Non-leap year\n"); */
  /* for (int m = 0; m < DEC; m++) { */
  /*   printf("Elapsed month(s): %d Days: %d\n", m, elapsed_days(m, 1999)); */
  /* } */

  /* printf("Leap year\n"); */
  /* for (int m = 0; m < DEC; m++) { */
  /*   printf("Elapsed month(s): %d Days: %d\n", m, elapsed_days(m, 2000)); */
  /* } */

  print_day_of_year(1, 1, 2000);
  print_day_of_year(2, 1, 2000);
  print_day_of_year(3, 1, 2000);
  print_day_of_year(4, 1, 2000);
  print_day_of_year(5, 1, 2000);
  print_day_of_year(6, 1, 2000);
  print_day_of_year(7, 1, 2000);
  print_day_of_year(8, 1, 2000);
  print_day_of_year(9, 1, 2000);
  print_day_of_year(10, 1, 2000);
  print_day_of_year(11, 1, 2000);
  print_day_of_year(12, 31, 2000);

  exit(EXIT_SUCCESS);
}


/* int elapsed_days(int m, int y) { */
/*   switch ( m ) { */
/*     case JAN: */
/*     case MAR: */
/*     case MAY: */
/*     case JUL: */
/*     case AUG: */
/*     case OCT: return 31 + elapsed_days(m-1, y); */
/*     case APR: */
/*     case SEP: */
/*     case JUN: */
/*     case NOV: return 30 + elapsed_days(m-1, y); */
/*     case FEB: return (is_leap_year(y) ? 29 : 28) + elapsed_days(m-1, y); */
/*     default: return 0; */
/*   } */
/* } */

const int month_lengths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int elapsed_days(int current_month, int year) {
  int elapsed = 0;
  for (int i = 0; i < current_month; i++) {
    elapsed += month_lengths[i];
  }

  if ( current_month > 1  &&  is_leap_year(year) ) {
    elapsed++;
  }

  return elapsed;
}
  
bool is_leap_year(int y) {
  if ( y % 400 == 0 ) {
    return true;
  } else if ( y % 100 == 0 ) {
    return false;
  } else {
    return y % 4 == 0;
  }
}

void print_day_of_year(int month, int day, int year) {
  printf("Day of year: %d/%d/%d %d [%d]\n", day, month, year, day + elapsed_days(month-1, year), day_of_year(day, month, year));
}

int do_julian(int day, int adjusted_month, int adjusted_year) {
  int c = adjusted_year / 100;
  int ya = adjusted_year % 100;

  return (c * 146097) / 4 + 
         (ya * 1461) / 4 +
         (adjusted_month * 153 + 2) / 5 +
         day + 1721119;
}

int julian(int day, int month, int year) {
  if ( month > 2 ) {
    return do_julian(day, month - 3, year);
  } else {
    return do_julian(day, month + 9, year - 1);
  }
}

/*
 * Day of year relative to January 1st for the given year.
 */
int day_of_year(int day, int month, int year) {
  return julian(day, month, year) - julian(1, 1, year) + 1;
}
