/*
 *
 *   File:
 *      b1ff.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230624  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#define BUFFER 1024
int main(void) {
  char msg[BUFFER+1] = {0};
  /* char format[7] = {0}; */
  /* snprintf(format, 7, "%%%dc", BUFFER); */
  /* printf("|%s|\n", format); */
  printf("Enter message: ");
  //  scanf(format, msg);
  
  char *result = fgets(msg, BUFFER, stdin);
  if ( result == NULL ) {
    exit(EXIT_FAILURE);
  }

  /* int length = strlen(msg); */
  /* if ( length > 0 ) { */
  /*   msg[length-1] = 0; */
  /* } */

  msg[strcspn(msg, "\n")] = 0;

  for (int i = 0; i < BUFFER; i++) {
    char *p = &msg[i];
    if ( *p == 0 ) {
      break;
    } else if ( isalpha(*p) ) {
      *p = toupper(*p);

      switch ( *p ) {
        case 'A':
          *p = '4';
          break;
        case 'B':
          *p = '8';
          break;
        case 'E':
          *p = '3';
          break;
        case 'I':
          *p = '1';
          break;
        case 'O':
          *p = '0';
          break;
        case 'S':
          *p = '5';
          break;
      }
    }
  }
  
  printf("In B1FF-speak: ");
  printf("%s", msg);

  srand((unsigned) time(NULL));

  for (int i = rand() % 8 + 3; i > 0; i--) {
    printf("!");
  }

  printf("\n");
  
  exit(EXIT_SUCCESS);
}
