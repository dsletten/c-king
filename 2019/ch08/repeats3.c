/*
 *
 *   File:
 *      repeats3.c
 *
 *   Synopsis:
 *       Ex. 3
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200301  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define WIDTH "%-12s"

int main(void) {
  long int n;

  while ( true ) {
    printf("Enter a number: ");
    scanf("%ld", &n);

    if ( n <= 0 ) { // Terminate if input is not positive.
      exit(EXIT_SUCCESS);
    } else {
      int repeats[10] = {0};
      while ( n > 0 ) {
	int digit = n % 10;
	
	repeats[digit]++;
	n /= 10;
      }
      
      printf(WIDTH, "Digit:");
      for (int i = 0; i < 10; i++) {
	printf("%3d", i);
      }
      printf("\n");
      
      printf(WIDTH, "Occurrences:");
      for (int i = 0; i < 10; i++) {
	printf("%3d", repeats[i]);
      }
      printf("\n");
    }
  }
}
