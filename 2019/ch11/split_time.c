/*
 *
 *   File:
 *      split_time.c
 *
 *   Synopsis:
 *      Fake multiple values...
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200502  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define SECONDS_PER_HOUR (60 * 60)
#define SECONDS_PER_MIN 60

void split_time(long int total_sec, int *hr, int *min, int *sec);

int main(void) {
  int h, m, s;

  split_time(4*60*60 + 7 * 60 + 9, &h, &m, &s);
  printf("%.2d:%.2d:%.2d\n", h, m, s);

  split_time(11*60*60 + 18 * 60 + 29, &h, &m, &s);
  printf("%.2d:%.2d:%.2d\n", h, m, s);

  split_time(23*60*60 + 59 * 60 + 59, &h, &m, &s);
  printf("%.2d:%.2d:%.2d\n", h, m, s);

  exit(EXIT_SUCCESS);
}

/*
 *    Given number of seconds since midnight, compute the number of hours, minutes, and seconds elapsed.
 *    Rather than returing 3 values we have to use pointers.
 *    Evidently King uses a long since a 16-bit int could not handle 86400 seconds in a day!!
 */
void split_time(long int total_sec, int *hr, int *min, int *sec) {
  int hours = total_sec / SECONDS_PER_HOUR;
  int minutes = total_sec % SECONDS_PER_HOUR / SECONDS_PER_MIN;
  int seconds = total_sec % SECONDS_PER_HOUR % SECONDS_PER_MIN;
  
  *hr = hours;
  *min = minutes;
  *sec = seconds;
}
