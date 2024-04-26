/*
 *
 *   File:
 *      airline.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200217  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int previous = -1;
  int current;
  int checksum = 0;

  printf("Enter ticket number: ");

  while ( (current = getchar()) != '\n' ) {
    current -= '0';
    printf("%d %d %d\n", previous, current, checksum);
    if ( previous < 0 ) {
      //      checksum = current % 7;
    } else {
      checksum = (checksum * 10 + previous) % 7;
    }

    previous = current;
  }

  if ( checksum == previous ) {
    printf("VALID\n");
  } else {
    printf("INVALID\n");
  }

  exit(EXIT_SUCCESS);
}
