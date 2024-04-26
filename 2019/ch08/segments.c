/*
 *
 *   File:
 *      segments.c
 *
 *   Synopsis:
 *      Ex. 9, 10
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200304  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SEGMENTS 7
#define DIGITS 10
#define ROWS 3

#define ON 1
#define OFF 0

//    King numbers the segments in a clockwise spiral from the top:
//      0
//      _
//    5|6|1
//      _
//    4| |2
//      _
//      3

/* const int segments[DIGITS][SEGMENTS] = {{ON, ON, ON, ON, ON, ON, OFF}, */
/* 					{OFF, ON, ON, OFF, OFF, OFF, OFF}, */
/* 					{ON, ON, OFF, ON, ON, OFF, ON}, */
/* 					{ON, ON, ON, ON, OFF, OFF, ON}, */
/* 					{OFF, ON, ON, OFF, OFF, ON, ON}, */
/* 					{ON, OFF, ON, ON, OFF, ON, ON}, */
/* 					{ON, OFF, ON, ON, ON, ON, ON}, */
/* 					{ON, ON, ON, OFF, OFF, OFF, OFF}, */
/* 					{ON, ON, ON, ON, ON, ON, ON}, */
/* 					{ON, ON, ON, ON, OFF, ON, ON}}; */

/*
 *    Minimized initializer
 */
const int segments[DIGITS][SEGMENTS] = {{ON, ON, ON, ON, ON, ON},
					{OFF, ON, ON},
					{ON, ON, OFF, ON, ON, OFF, ON},
					{ON, ON, ON, ON, OFF, OFF, ON},
					{OFF, ON, ON, OFF, OFF, ON, ON},
					{ON, OFF, ON, ON, OFF, ON, ON},
					{ON, OFF, ON, ON, ON, ON, ON},
					{ON, ON, ON},
					{ON, ON, ON, ON, ON, ON, ON},
					{ON, ON, ON, ON, OFF, ON, ON}};

int get_limit();
void print_digit(int n);

void print_number(int n, int digit_count);
void print_digit_row(int row, int n);
void print_digit_top_row(int n);
void print_digit_middle_row(int n);
void print_digit_bottom_row(int n);
void print_lit_segment(int digit, int segment);
void print_segment(int i);
  
int main(void) {
  int limit = get_limit();

  if ( limit > 20 ) {
    printf("This is gonna take awhile...\n");
  }

  /* int digit_count = (int) ceil(log10(123.5)); // Optimized out by compiler!!! Constant! */
  //  int digit_count = (int) ceil(log10(limit)); // Wrong! Only shows up for limit = 100000. Should be 6 digits rather than 5...
  int digit_count = floor(log10(limit)) + 1;

  //    Minimum width
  /* if ( digit_count < 5 ) { */
  /*   digit_count = 5; */
  /* } */

  for (int i = 1; i <= limit; i++) {
    print_number(i, digit_count);
  }
  
  exit(EXIT_SUCCESS);
}

int get_limit() {
  printf("Enter a positive integer: ");

  int n;
  int count = scanf("%d", &n);

  if ( count != 1  ||  n < 0 ) {
    while ( getchar() != '\n' );

    return get_limit();
  } else {
    return n;
  }
}

/*
 *    Print a single digit in isolation. (Can't print another digit alongside!)
 *    Not used. Just part of early exploration.
 */
void print_digit(int n) {
  printf(" ");
  if ( segments[n][0] == ON ) {
    print_segment(0);
  } else {
    printf(" ");
  }
  printf(" \n");

  if ( segments[n][5] == ON ) {
    print_segment(5);
  } else {
    printf(" ");
  }
  if ( segments[n][6] == ON ) {
    print_segment(6);
  } else {
    printf(" ");
  }
  if ( segments[n][1] == ON ) {
    print_segment(1);
  } else {
    printf(" ");
  }
  printf(" \n");

  if ( segments[n][4] == ON ) {
    print_segment(4);
  } else {
    printf(" ");
  }
  if ( segments[n][3] == ON ) {
    print_segment(3);
  } else {
    printf(" ");
  }
  if ( segments[n][2] == ON ) {
    print_segment(2);
  } else {
    printf(" ");
  }
  printf(" \n");
}

void print_lit_segment(int digit, int segment) {
  if ( segments[digit][segment] == ON ) {
    print_segment(segment);
  } else {
    printf(" ");
  }
}

void print_segment(int i) {
  switch ( i ) {
    case 0:
    case 3:
    case 6:
      printf("_");
      break;
    case 1:
    case 2:
    case 4:
    case 5:
      printf("|");
      break;
    default:
      printf("Error...");
  }
}

/*
 *    Allow variable width (0-padded)?
 */
void print_number(int n, int digit_count) {
  int digits[digit_count];

  //    Initialize (0-pad)
  for (int i = 0; i < digit_count; i++) {
    digits[i] = 0;
  }

  for (int i = digit_count-1, m = n; m > 0; i--) {
    digits[i] = m % 10;
    m /= 10;
  }

  for (int row = 0; row < ROWS; row++) {
    for (int digit = 0; digit < digit_count; digit++) {
      print_digit_row(row, digits[digit]);
    }
    printf("\n");
  }
}

void print_digit_row(int row, int n) {
  switch ( row ) {
    case 0:
      print_digit_top_row(n);
      break;
    case 1:
      print_digit_middle_row(n);
      break;
    case 2:
      print_digit_bottom_row(n);
      break;
    default:
      printf("Error...");
  }
}

void print_digit_top_row(int n) {
  printf(" ");
  print_lit_segment(n, 0);
  printf(" ");
}

void print_digit_middle_row(int n) {
  print_lit_segment(n, 5);
  print_lit_segment(n, 6);
  print_lit_segment(n, 1);
}

void print_digit_bottom_row(int n) {
  print_lit_segment(n, 4);
  print_lit_segment(n, 3);
  print_lit_segment(n, 2);
}
