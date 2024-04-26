/*
 *
 *   File:
 *      command_line_name.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200513  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if ( argc != 3 ) {
    exit(EXIT_FAILURE);
  } else {
    char first_name[50];
    char last_name[50];
    char full_name[100] = "";  // !!!!!!!!!!!!!!!!!!!!!!!1

    printf("Surprise!\n");
    for (int i = 0; i < 10; i++) {
      printf("%c [%d]\n", full_name[i], full_name[i]);
    }
    printf("\n");

    strncpy(first_name, argv[1], sizeof(first_name));
    strncpy(last_name, argv[2], sizeof(last_name));
    /* strncat(strncat(full_name, first_name, 50), last_name, 50); */
    strncat(full_name, first_name, 50);
    strncat(full_name, " ", 1); // 2 ??
    strncat(full_name, last_name, 50);

    printf("Hello, %s %s\n", first_name, last_name);
    printf("AKA %s\n", full_name);

    for (int i = 0; i < 10; i++) {
      printf("%c [%d]\n", first_name[i], first_name[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
      printf("%c [%d]\n", last_name[i], last_name[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
      printf("%c [%d]\n", full_name[i], full_name[i]);
    }
  }

  exit(EXIT_SUCCESS);
}
