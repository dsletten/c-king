/*
 *
 *   File:
 *      isbn.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240503  Original.
 *
 *      This simplistic program cannot handle ISBNs with fields starting
 *      with 0:
 *      9971-5-0210-0 Singapore
 *      85-359-0277-5 Brazil
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int language, publisher, book, check_digit;

  printf("Enter ISBN: ");
  int count = scanf("%d-%d-%d-%d", &language, &publisher, &book, &check_digit);

  if ( count == 4 ) {
    printf("Language: %d\n", language);
    printf("Publisher: %d\n", publisher);
    printf("Book number: %d\n", book);
    printf("Check digit: %d\n", check_digit);

    exit(EXIT_SUCCESS);
  } else {
    fprintf(stderr, "User error!\n");
    exit(EXIT_FAILURE);
  }
}
