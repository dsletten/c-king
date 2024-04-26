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

  printf("%lu\n", int_size);
  
  int_size = sizeof(i + j);
  printf("%lu\n", int_size);
  printf("%lu\n", sizeof i + j);

  printf("Size of %s: %lu\n", "signed short", (unsigned long) sizeof(signed short));
  printf("Size of %s: %lu\n", "signed int", (unsigned long) sizeof(signed int));
  printf("Size of %s: %lu\n", "signed long", (unsigned long) sizeof(signed long));
  printf("Size of %s: %lu\n", "signed long long", (unsigned long) sizeof(signed long long));
  printf("Size of %s: %lu\n", "unsigned short", (unsigned long) sizeof(unsigned short));
  printf("Size of %s: %lu\n", "unsigned int", (unsigned long) sizeof(unsigned int));
  printf("Size of %s: %lu\n", "unsigned long", (unsigned long) sizeof(unsigned long));
  printf("Size of %s: %lu\n", "unsigned long long", (unsigned long) sizeof(unsigned long long));

  printf("Size of %s: %lu\n", "float", (unsigned long) sizeof(float));
  printf("Size of %s: %lu\n", "double", (unsigned long) sizeof(double));
  printf("Size of %s: %lu\n", "long double", (unsigned long) sizeof(long double));

  {
    int i;
    printf("%lu\n", sizeof(i));  // No casts anymore???
    printf("%lu\n", sizeof(int));
  }

  {
    char ch;
    size_t s1 = sizeof(ch);
    size_t s2 = sizeof(char);
    size_t s3 = sizeof('A');  // "char" literal -> int
    size_t s4 = sizeof 'A';

    printf("%lu\n", sizeof(ch));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof('A'));
    printf("%lu\n", sizeof 'A');

    printf("%lu\n", s1);
    printf("%lu\n", s2);
    printf("%lu\n", s3);
    printf("%lu\n", s4);
  }

  exit(EXIT_SUCCESS);
}
