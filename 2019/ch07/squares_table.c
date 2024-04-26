/*
 *
 *   File:
 *      squares_table.c
 *
 *   Synopsis:
 *      Ex. 2 (Based on ch. 6 square2.c) Find limits of short, int, long types.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200213  Original.
 *
 *    short limit:
 *           182                 -32412    
 *    int limit:
 *         46341            -2147479015
 *    long limit:
 *    3037000500   -9223372036709301616
 *
 *    (log (* 182 182) 2d0)                    => 15.015589280397393d0
 *    (log (* 46341 46341) 2d0)                => 31.00000311247954d0
 *    (let ((i 3037000500)) (log (* i i) 2d0)) => 63.00000000002275d0
 *
 *    From sizeof.c:               Max
 *    Size of signed short: 2      2**15 - 1
 *    Size of signed int: 4        2**31 - 1
 *    Size of signed long: 8       2**63 - 1
 *    
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int get_size();
//int get_size();

int main(void) {
  printf("This program prints a table of squares.\n");

  //  int n = get_size();
  unsigned int n = get_size();

  for (int unsigned i = 1; i <= n; i++) {
    //  for (int i = 1; i <= n; i++) {
    //    short square = i * i;
    /* int square = i * i; */
    long square = (long) i * i;
    //    printf("%10d%20hd\n", i, square);
    /* printf("%10d%20d\n", i, square); */

    //    printf("%10d%20ld\n", i, square);
    if ( square < 0 ) {
      printf("%10u%20ld\n", i, square);
      break;
    }
  }

  exit(EXIT_SUCCESS);
}

unsigned int get_size() {
  unsigned int n;
  
  printf("Enter number of entries in table: ");
  int count = scanf("%u", &n); // This does not "enforce" that the input string must
                               // represent a non-negative integer! This simply
                               // converts that string into an unsigned int.
  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_size();
  } else if ( n < 0 ) {        // In fact, the %u above renders this meaningless.
    return get_size();
  } else {
    return n;
  }
}

/* int get_size() { */
/*   int n; */
  
/*   printf("Enter number of entries in table: "); */
/*   int count = scanf("%d", &n); */

/*   if ( count != 1 ) { */
/*     while ( getchar() != '\n' ); */
/*     return get_size(); */
/*   } else if ( n < 0 ) { */
/*     return get_size(); */
/*   } else { */
/*     return n; */
/*   } */
/* } */
