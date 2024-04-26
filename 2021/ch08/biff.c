/*
 *
 *   File:
 *      biff.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211226  Original.
 *
 *      https://en.wikipedia.org/wiki/BIFF
 *      Lines limited to 40 chars!
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define MSG_LENGTH 40

char biff_translate(char ch);

int main(void) {
  char msg[MSG_LENGTH] = {'\0'};
  srand((unsigned) time(NULL));
  
  printf("Enter message: ");

  char ch;
  for (int i = 0; i < MSG_LENGTH; i++) {
    ch = getchar();

    if ( ch == '\n' ) {
      break;
    } else {
      msg[i] = ch;
    }
  }

  printf("In B1FF-speak: ");
  int i = 0;
  while ( msg[i] != '\0'  &&  i < MSG_LENGTH) {
    printf("%c", biff_translate(msg[i]));
    i++;
  }

  int exclaim = rand() % 10 + 4;
  for (int i = 0; i < exclaim; i++) {
    printf("!");
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}

/* char biff_translate(char ch) { */
/*   if ( isalnum(ch) ) { */
/*     char biff_char = toupper(ch); */

/*     switch ( biff_char ) { */
/*       case 'A': return '4'; */
/*       case 'B': return '8'; */
/*       case 'E': return '3'; */
/*       case 'I': return '1'; */
/*       case 'O': return '0'; */
/*       case 'S': return '5'; */
/*       default: return biff_char; */
/*     } */
/*   } else { */
/*     return ch; */
/*   } */
/* } */
  
char biff_speak[] = "48CD3FGH1JKLMN0PQR5TUVWXYZ";
char biff_translate(char ch) {
  if ( isalnum(ch) ) {
    return biff_speak[toupper(ch) - 'A'];
  } else {
    return ch;
  }
}
