/*
 *
 *   File:
 *      reverse.c
 *
 *   Synopsis:
 *      Ex. 5
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211220  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define LENGTH (sizeof(a) / sizeof(a[0]))

int main(void) {
  int a[N];
  
  printf("Enter %d number%s: ", N, (N == 1 ? "" : "s"));
  
  for (int i = 0; i < LENGTH; i++) {
    int count = scanf("%d", &a[i]);

    if ( count != 1 ) {
      fprintf(stderr, "Garbage entered!\n");
      exit(EXIT_FAILURE);
    }
  }

  printf("In reverse order:");

  for (int i = LENGTH - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
