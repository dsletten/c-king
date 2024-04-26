/*
 *
 *   File:
 *      reverse1.c
 *
 *   Synopsis:
 *      Ch. 12 ex. 4 (a)
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200509  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define BUFF 100

int main(void) {
  char msg[BUFF+1];

  printf("Enter a message: ");
  
  int i = 0;
  char ch;
  while ( i <= BUFF  &&  (ch = getchar()) != '\n' ) {
    msg[i++] = ch;
  }

  printf("Reversal is: ");

  while ( --i >= 0 ) {
    printf("%c", msg[i]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
