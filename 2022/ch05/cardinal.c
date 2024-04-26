/*
 *
 *   File:
 *      cardinal.c
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

void print_units(int n);
void print_teens(int n);
void print_tens(int n);

int main(void) {
  printf("Enter a two-digit number: ");
  int n;
  int count = scanf("%d", &n);

  if ( count != 1  ||  n < 0  ||  n > 99 ) {
    fprintf(stderr, "Hit the road!\n");
    exit(EXIT_FAILURE);
  } else {
    printf("You entered the number ");
    
    switch ( n / 10 ) {
      case 0:
        print_units(n);
        break;
      case 1:
        print_teens(n);
        break;
      default:
        print_tens(n);
    }
    
    printf(".\n");
    
    exit(EXIT_SUCCESS);
  }
}

void print_units(int n) {
  switch ( n ) {
    case 0:
      printf("zero");
      break;
    case 1:
      printf("one");
      break;
    case 2:
      printf("two");
      break;
    case 3:
      printf("three");
      break;
    case 4:
      printf("four");
      break;
    case 5:
      printf("five");
      break;
    case 6:
      printf("six");
      break;
    case 7:
      printf("seven");
      break;
    case 8:
      printf("eight");
      break;
    case 9:
      printf("nine");
      break;
  }
}

void print_teens(int n) {
  switch ( n ) {
    case 10:
      printf("ten");
      break;
    case 11:
      printf("eleven");
      break;
    case 12:
      printf("twelve");
      break;
    case 13:
      printf("thirteen");
      break;
    case 14:
      printf("fourteen");
      break;
    case 15:
      printf("fifteen");
      break;
    case 16:
      printf("sixteen");
      break;
    case 17:
      printf("seventeen");
      break;
    case 18:
      printf("eighteen");
      break;
    case 19:
      printf("nineteen");
      break;
  }
}

void print_tens(int n) {
  switch ( n / 10 ) {
    case 2:
      printf("twenty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("forty");
      break;
    case 5:
      printf("fifty");
      break;
    case 6:
      printf("sixty");
      break;
    case 7:
      printf("seventy");
      break;
    case 8:
      printf("eighty");
      break;
    case 9:
      printf("ninety");
      break;
  }

  if ( n % 10 != 0 ) {
    printf("-");
    print_units(n % 10);
  }
}
