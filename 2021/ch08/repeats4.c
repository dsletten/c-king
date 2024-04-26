/*
 *
 *   File:
 *      repeats4.c
 *
 *   Synopsis:
 *      Ex. 3
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211220  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  while ( true ) {
    printf("Enter a number: ");
    long int n;
    int count = scanf("%ld", &n);
    
    if ( count != 1 ) {
      exit(EXIT_FAILURE);
    } else if ( n <= 0 ) {
      exit(EXIT_SUCCESS);
    } else {
      bool seen[10] = {false};

      while ( n > 0 ) {
        int digit = n % 10;
        if ( seen[digit] ) {
          break;
        } else {
          seen[digit] = true;
        }
        
        n /= 10;
      }
      
      if ( n > 0 ) {
        printf("Repeated digit\n");
      } else {
        printf("No repeated digit\n");
      }
    }
  }
}
