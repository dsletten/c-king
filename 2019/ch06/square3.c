/*
 *
 *   File:
 *      square3.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_size();

int main(void) {
  printf("This program prints a table of squares.\n");

  int n = get_size();

  int odd = 3;
  int square = 1;
  for (int i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, square);
    
    square += odd;
    odd += 2;
  }

  exit(EXIT_SUCCESS);
}

int get_size() {
  int n;
  
  printf("Enter number of entries in table: ");
  int count = scanf("%d", &n);

  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_size();
  } else if ( n < 0 ) {
    return get_size();
  } else {
    return n;
  }
}
