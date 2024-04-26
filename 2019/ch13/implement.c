/*
 *
 *   File:
 *      implement.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200516  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *end_of_string(const char *s);
const char *end_of_string1(const char *s);
size_t strlen1(const char *s);
size_t strlen2(const char *s);
size_t strlen3(const char *s);
size_t strlen4(const char *s);

int main(void) {
  char s1[100] = "Is this not pung?";

  strncpy((char *) end_of_string(s1), " Yeah.", 10);
  strncpy((char *) end_of_string1(s1), " Duh...", 10);

  printf("%s\n", s1);

  printf("strlen() %lu\n", (unsigned long) strlen(s1));
  printf("strlen1() %lu\n", (unsigned long) strlen1(s1));
  printf("strlen2() %lu\n", (unsigned long) strlen2(s1));
  printf("strlen3() %lu\n", (unsigned long) strlen3(s1));
  printf("strlen4() %lu\n", (unsigned long) strlen4(s1));

  exit(EXIT_SUCCESS);
}

/* char *end_of_string(const char *s) { */
//    King's original has this prototype. But compiler complains about return s (type const char *)
//    as simply char * !!
//    
const char *end_of_string(const char *s) {
  while ( *s ) {
    s++;
  }

  return s;
}

const char *end_of_string1(const char *s) {
  while ( *s++ ) {}
    
  return --s;
}

size_t strlen1(const char *s) {
  size_t n;
  
  for (n = 0; *s != '\0'; s++) {
    n++;
  }

  return n;
}

size_t strlen2(const char *s) {
  size_t n = 0;

  while ( *s != '\0' ) {
    s++;
    n++;
  }

  return n;
}

size_t strlen3(const char *s) {
  size_t n = 0;
  
  while ( *s++ ) {
    n++;
  }

  return n;
}

size_t strlen4(const char *s) {
  const char *p = s;

  while ( *p ) {
    p++;
  }

  return p - s;
}
