/*
 *
 *   File:
 *      square_prompt.c
 *
 *   Synopsis:
 *      Ex. 8
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200215  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_size();

int main(void) {
  printf("This program prints a table of squares.\n");

  int n = get_size();

  for (int i = 1; i <= n; i++) {
    int square = i * i;
    printf("%10d%20d\n", i, square);
    
    if ( i % 24 == 0 ) {
      printf("Press Enter to continue...");
      while ( getchar() != '\n' ) {}
    }
  }

  exit(EXIT_SUCCESS);
}

int get_size() {
  int n;
  
  printf("Enter number of entries in table: ");
  int count = scanf("%d", &n);

  if ( count != 1 ) {
    while ( getchar() != '\n' ) {}
    return get_size();
  } else if ( n < 0 ) {
    return get_size();
  } else {
    while ( getchar() != '\n' ) {} // scanf() above will not have consumed newline char!!
    return n;
  }
}
