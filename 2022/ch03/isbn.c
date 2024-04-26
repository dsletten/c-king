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
 *      220912  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int language, publisher, book, check;

  printf("Enter ISBN: ");
  int count = scanf("%d-%d-%d-%d", &language, &publisher, &book, &check);

  if ( count != 4 ) {
    fprintf(stderr, "Very bad!\n");
    exit(EXIT_FAILURE);
  } else {
    printf("Language: %d\n", language);
    printf("Publisher: %d\n", publisher);
    printf("Book number: %d\n", book);
    printf("Check digit: %d\n", check);

    exit(EXIT_SUCCESS);
  }
}
