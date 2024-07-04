/*
 *
 *   File:
 *      military.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240516  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void get_time(int* hours, int* minutes);
char* get_label(int hours, int minutes);

int main(void) {
  int hours, minutes;
  get_time(&hours, &minutes);

  int adjusted_hours = (hours + 11) % 12 + 1;
  printf("Equivalent 12-hour time: %d:%.2d %s\n", adjusted_hours, minutes, get_label(hours, minutes));
  
  exit(EXIT_SUCCESS);
}

void get_time(int* hours, int* minutes) {
  printf("Enter a 24-hour time: ");
  int count = scanf("%2d:%2d", hours, minutes);

  if ( count == 2 ) {
    if ( *hours >= 0  &&  *hours <= 23  &&  *minutes >= 0  && *minutes <= 59 ) {
      return;
    } else {
      return get_time(hours, minutes);
    }
  } else {
    while ( getchar() != '\n' );
    return get_time(hours, minutes);
  }
}

/* char* get_label(int hours, int minutes) { */
/*   switch ( hours / 12 ) { */
/*     case 0: */
/*       return (hours % 12 == 0  &&  minutes == 0) ? "midnight" : "AM"; */
/*     case 1: */
/*       return (hours % 12 == 0  &&  minutes == 0) ? "noon" : "PM"; */
/*   } */
/* } */

/* char* get_label(int hours, int minutes) { */
/*   switch ( hours / 12 ) { */
/*     case 0: */
/*       switch ( hours % 12 ) { */
/*         case 0: */
/*           switch ( minutes ) { */
/*             case 0: */
/*               return "midnight"; */
/*             default: */
/*               return "AM"; */
/*           } */
/*         default: */
/*           return "AM"; */
/*       } */
/*     case 1: */
/*       switch ( hours % 12) { */
/*         case 0: */
/*           switch ( minutes ) { */
/*             case 0: */
/*               return "noon"; */
/*             default: */
/*               return "PM"; */
/*           } */
/*         default: */
/*           return "PM"; */
/*       } */
/*   } */
/* } */

char* get_label(int hours, int minutes) {
  switch ( hours / 12 ) {
    case 0:
      switch ( hours % 12 ) {
        case 0:
          switch ( minutes ) {
            case 0:
              return "midnight";
          }
        // Fall through
        default:
          return "AM";
      }
    case 1:
      switch ( hours % 12) {
        case 0:
          switch ( minutes ) {
            case 0:
              return "noon";
          }
        // Fall through
        default:
          return "PM";
      }
  }
}
