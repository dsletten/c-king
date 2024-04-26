/*
 *
 *   File:
 *      isbn.c
 *
 *   Synopsis:
 *      Break an ISBN entered by user into its components.
 *      -What about leading 0's??
 *
 *      The Flamingo's Smile 0-393-30375-6       
 *      Endangered Pleasures 0-316-37057-6
 *      C Programming: A Modern Approach 0-393-96945-2 (Norton = 393)
 *
 *      Modern books use ISBN-13!
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190730  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int language, publisher, book_number, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d", &language, &publisher, &book_number, &check_digit);

  printf("Language: %d\n", language);
  printf("Publisher: %d\n", publisher);
  printf("Book number: %d\n", book_number);
  printf("Check digit: %d\n", check_digit);
  
  exit(EXIT_SUCCESS);
}
