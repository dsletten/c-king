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
 *      210825  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter ISBN: ");
  unsigned int language, publisher, book_number, check_digit;
  int count = scanf("%u-%u-%u-%u", &language, &publisher, &book_number, &check_digit);

  if ( count == 4 ) {
    printf("Language: %u\n", language);
    printf("Publisher: %u\n", publisher);
    printf("Book number: %u\n", book_number);
    printf("Check digit: %u\n", check_digit);
  } else {
    printf("Suck it!\n");
  }

  exit(EXIT_SUCCESS);
}
