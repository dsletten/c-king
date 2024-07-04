/*
 *
 *   File:
 *      sizeof.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200127  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void) {
  int i = 1;
  int j = 2;
  
  size_t int_size = sizeof i;

  printf("%2zd\n", int_size);
  
  int_size = sizeof(i + j);
  printf("%2zd\n", int_size);
  printf("%2zd\n", sizeof i + j); // Junk!

  printf("Size of %s: %2zd\n", "char", sizeof(char));
  printf("Size of %s: %2zd\n", "signed char", sizeof(signed char));
  printf("Size of %s: %2zd\n", "unsigned char", sizeof(unsigned char));

  printf("Size of %s: %2zd\n", "signed short", sizeof(signed short));
  printf("Size of %s: %2zd\n", "signed int", sizeof(signed int));
  printf("Size of %s: %2zd\n", "signed long", sizeof(signed long));
  printf("Size of %s: %2zd\n", "signed long long", sizeof(signed long long));
  printf("Size of %s: %2zd\n", "unsigned short", sizeof(unsigned short));
  printf("Size of %s: %2zd\n", "unsigned int", sizeof(unsigned int));
  printf("Size of %s: %2zd\n", "unsigned long", sizeof(unsigned long));
  printf("Size of %s: %2zd\n", "unsigned long long", sizeof(unsigned long long));

  printf("Size of %s: %2zd\n", "float", sizeof(float));
  printf("Size of %s: %2zd\n", "double", sizeof(double));
  printf("Size of %s: %2zd\n", "long double", sizeof(long double));
  printf("Size of %s: %2zd\n", "pointer", sizeof(void *));

  {
    int i;
    printf("%2zd\n", sizeof(i));  // No casts anymore???
    printf("%2zd\n", sizeof(int));
  }

  {
    char ch;
    size_t s1 = sizeof(ch);
    size_t s2 = sizeof(char);
    size_t s3 = sizeof('A');  // "char" literal -> int
    size_t s4 = sizeof 'A';

    printf("%2zd\n", sizeof(ch));
    printf("%2zd\n", sizeof(char));
    printf("%2zd\n", sizeof('A'));
    printf("%2zd\n", sizeof 'A');

    printf("%2zd\n", s1);
    printf("%2zd\n", s2);
    printf("%2zd\n", s3);
    printf("%2zd\n", s4);
  }

  exit(EXIT_SUCCESS);
}
