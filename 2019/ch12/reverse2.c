/*
 *
 *   File:
 *      reverse2.c
 *
 *   Synopsis:
 *      Ch. 12 ex. 4 (b)
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
  
  char *p = msg;
  char ch;
  while ( p <= msg + BUFF  &&  (ch = getchar()) != '\n' ) {
    *p++ = ch;
  }

  printf("Reversal is: ");

  while ( --p >= msg ) {
    printf("%c", *p);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
