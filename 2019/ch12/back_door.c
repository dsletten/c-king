/*
 *
 *   File:
 *      back_door.c
 *
 *   Synopsis:
 *      Can we get around const declaration?
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200505  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void foo(const int a[], int n);
void fake(int *a, int n);
void print_array(int a[], int n);
  
int main(void) {
  int b[5] = {1, 2, 3, 4, 5};
  printf("%lu\n", (unsigned long) sizeof(b));
  printf("%lu\n", (unsigned long) sizeof(*b));

  int *p = b + 5;
  printf("Last element: %d\n", p[-1]);

  //    Funky syntax!!
  printf("2nd element: %d\n", 2[b]); // !!!!!!!!!!!!!!

  if ( b == &b ) {
    printf("Righteous!\n");
  } else {
    printf("Bogus.\n");
  }

  p = &b[0];
  p = b;

  foo(b, 5);

  int m = 8;
  printf("Before: %d\n", m);
  print_array(b, 5);
  fake(&m, 5);
  printf("After: %d\n", m);
  print_array(b, 5);

  exit(EXIT_SUCCESS);
}

void foo(const int a[], int n) {
/* back_door.c:30:10: error: read-only variable is not assignable */
/*     a[i] *= 10; */
/*     ~~~~ ^ */
/* 1 error generated. */
/* make: *** [back_door] Error 1 */

  /* for (int i = 0; i < n; i++) { */
  /*   a[i] *= 10; */
  /* } */

  /*
   *    Compiler _almost_ catches it...
   */
/* back_door.c:39:13: warning: initializing 'int *' with an expression of type 'const int *' discards qualifiers [-Wincompatible-pointer-types-discards-qualifiers] */
/*   for (int *p = a; p < a + n; p++) { */
/*             ^   ~ */
/* 1 warning generated. */

  for (int *p = a; p < a + n; p++) {
    *p *= 10;
  }
}

void fake(int *a, int n) {
  for (int *p = a; p < a + n; p++) {
    *p += 99;
  }
}

void print_array(int a[], int n) {
  printf("[");

  for (int *p = a; p < a + n; p++) {
    printf("%5d", *p);
  }

  printf("]\n");
}

