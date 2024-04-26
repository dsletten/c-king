/*
 *
 *   File:
 *      cardinal.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211011  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Enter a two-digit number: ");
  int count = scanf("%d", &n);

  if ( count != 1  ||  n < 10  ||  n > 99 ) {
    printf("You have trouble following directions...\n");
  } else {
    printf("You entered the number ");

    switch ( n ) {
      case 10:
        printf("ten");
        break;
      case 11:
        printf("eleven");
        break;
      case 12:
        printf("twelve");
        break;
      case 13:
        printf("thirteen");
        break;
      case 14:
        printf("fourteen");
        break;
      case 15:
        printf("fifteen");
        break;
      case 16:
        printf("sixteen");
        break;
      case 17:
        printf("seventeen");
        break;
      case 18:
        printf("eighteen");
        break;
      case 19:
        printf("nineteen");
        break;
      default:
        switch ( n / 10 ) {
          case 2:
            printf("twenty");
            break;
          case 3:
            printf("thirty");
            break;
          case 4:
            printf("forty");
            break;
          case 5:
            printf("fifty");
            break;
          case 6:
            printf("sixty");
            break;
          case 7:
            printf("seventy");
            break;
          case 8:
            printf("eighty");
            break;
          case 9:
            printf("ninety");
        }

        switch ( n % 10 ) {
          case 1:
            printf("-one");
            break;
          case 2:
            printf("-two");
            break;
          case 3:
            printf("-three");
            break;
          case 4:
            printf("-four");
            break;
          case 5:
            printf("-five");
            break;
          case 6:
            printf("-six");
            break;
          case 7:
            printf("-seven");
            break;
          case 8:
            printf("-eight");
            break;
          case 9:
            printf("-nine");
        }
    }

    printf(".\n");
  }

  exit(EXIT_SUCCESS);
}
