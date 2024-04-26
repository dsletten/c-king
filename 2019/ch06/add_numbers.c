/*
 *
 *   File:
 *      add_numbers.c
 *
 *   Synopsis:
 *      Add nummbers input by user until 0 is entered.
 *      - Compare different looping strategies
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200105  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int n;

  int sum = 0;
  printf("Enter integers (0 to terminate): ");
  
  scanf("%d", &n);
  while ( n != 0 ) {
    sum += n;
    scanf("%d", &n);
  }

  printf("The sum is: %d\n", sum);

  sum = 0;
  printf("Enter integers (0 to terminate): ");
  
  while ( true ) {
    scanf("%d", &n);
    
    if ( n == 0 ) {
      break;
    }

    sum += n;
  }

  printf("The sum is: %d\n", sum);

  printf("Enter integers (0 to terminate): ");
  
  for(sum = 0; scanf("%d", &n), n != 0;) {
    sum += n;
  }

  printf("The sum is: %d\n", sum);

  exit(EXIT_SUCCESS);
}
