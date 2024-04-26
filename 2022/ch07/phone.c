/*
 *
 *   File:
 *      phone.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230507  Original.
 *
 */

/* (defun cases (s n) */
/*   (loop for ch across s */
/*         do (format t "case '~C':~%" ch)  */
/*         finally (format t "digit = '~D';~%break;~%" n))) */

/* (loop for n from 2 */
/*       for s in '("ABC" "DEF" "GHI" "JKL" "MNO" "PRS" "TUV" "WXY")  */
/*       do (cases s n)) */

#include <stdio.h>
#include <stdlib.h>

char translate(char ch);

int main(void) {
  printf("Enter phone number: ");

  char ch;
  while ( (ch = getchar()) != '\n' ) {
    printf("%c", translate(ch));
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}

char translate(char ch) {
    switch ( ch ) {
      case 'A':
      case 'B':
      case 'C':
        return '2';
        
      case 'D':
      case 'E':
      case 'F':
        return '3';
        
      case 'G':
      case 'H':
      case 'I':
        return '4';
        
      case 'J':
      case 'K':
      case 'L':
        return '5';
        
      case 'M':
      case 'N':
      case 'O':
        return '6';
        
      case 'P':
      case 'R':
      case 'S':
        return '7';
        
      case 'T':
      case 'U':
      case 'V':
        return '8';
        
      case 'W':
      case 'X':
      case 'Y':
        return '9';
        
      default:
        return ch;
    }
}
  
