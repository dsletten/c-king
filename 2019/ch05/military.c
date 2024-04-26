/*
 *
 *   File:
 *      military.c
 *
 *   Synopsis:
 *      Ripped off from Kings' JPB ch. 4!!
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200103  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//
//    Blech...global variables.
//    
int hours;
int minutes;

void print_meridian(bool is_morning, bool is_noon_or_midnight) {
  if ( is_morning ) {
    printf("%s", is_noon_or_midnight ? "midnight" : "AM");
  } else {
    printf("%s", is_noon_or_midnight ? "noon" : "PM");
  }
}

void print_military_time() {
  printf("%d:%02d ", ((hours + 11) % 12) + 1, minutes);
  print_meridian(hours / 12 == 0, hours % 12 == 0);
  printf("\n");
}

void read_time() {
  printf("Enter a 24-hour time: ");
  int count = scanf("%2d:%2d", &hours, &minutes);

  if ( count != 2  ||  hours < 0  || hours > 23  ||  minutes < 0  ||  minutes > 59 ) {
    read_time(); // Infinite loop if garbage in STDIN is not cleared!!!
  }
}

//
//    Need to learn how to return arrays, strings from functions...
//    
int main(void) {
  read_time();
  printf("Equivalent 12-hour time: ");
  print_military_time();

  exit(EXIT_SUCCESS);
}
