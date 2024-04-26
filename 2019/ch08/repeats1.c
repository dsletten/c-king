/*
 *
 *   File:
 *      repeats1.c
 *
 *   Synopsis:
 *       Ex. 1
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200301  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int repeats[10] = {0};
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    int digit = n % 10;
    
    repeats[digit]++;
    n /= 10;
  }

  int repeat_count = 0;
  for (int i = 0; i < 10; i++) {
    if ( repeats[i] > 1 ) {
      repeat_count++;
    }
  }

  if ( repeat_count > 0 ) {
    printf("Repeated %s:", repeat_count == 1 ? "digit" : "digits");
    for (int i = 0; i < 10; i++) {
      if ( repeats[i] > 1 ) {
	printf("%2d", i);
      }
    }
    printf("\n");
  } else {
    printf("No repeated digit\n");
  }

  exit(EXIT_SUCCESS);
}
