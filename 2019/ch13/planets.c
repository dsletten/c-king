/*
 *
 *   File:
 *      planets.c
 *
 *   Synopsis:
 *      Old school! Pluto!
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200518  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_PLANETS 9

void print_array_args(int n, char *argv[]);
void print_pointer_args(char **argv);

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

  print_array_args(argc, argv);
  print_pointer_args(argv);

  for (int i = 1; i < argc; i++) {
    int j;
    for (j = 0; j < N_PLANETS; j++) {
      if ( strcmp(argv[i], planets[j]) == 0 ) {
        printf("I recognize the planet %s. It is planet %d from the Sun.\n", argv[i], j+1);
        break;
      }
    }

    if ( j == N_PLANETS ) {
      printf("%s is not a planet\n", argv[i]);
    }
  }

  exit(EXIT_SUCCESS);
}

void print_array_args(int n, char *s[]) {
  for (int i = 1; i < n; i++) {
    printf("%s\n", s[i]);
  }
}

void print_pointer_args(char **s) {
  while ( *++s != NULL ) {
    printf("%s\n", *s);
  }
}

