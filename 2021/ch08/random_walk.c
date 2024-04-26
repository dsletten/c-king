/*
 *
 *   File:
 *      random_walk.c
 *
 *   Synopsis:
 *      Ex. 13 Random walk over 2-D field
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      220206  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSION 10
#define EMPTY '.'
#define NORTH 0 // enum!!!
#define SOUTH 1
#define EAST 2
#define WEST 3

void print_field(int field[DIMENSION][DIMENSION]);

int main(void) {
  int field[DIMENSION][DIMENSION];

  for (int row = 0; row < DIMENSION; row++) {
    for (int col = 0; col < DIMENSION; col++) {
      field[row][col] = EMPTY;
    }
  }

  srand((unsigned) time(NULL));

  int i = -1;
  int j = 0;
  for (char ch = 'A'; ch <= 'Z'; ch++) {
    int tried = 0;

    while ( tried != 0xF ) {
      switch ( rand() % 4 ) {
        case NORTH:
          if ( i > 0  &&  field[i-1][j] == EMPTY ) {
            i--;
            field[i][j] = ch;
            tried = 0xF;
          } else {
            tried |= 1;
          }
          break;
        case SOUTH:
          if ( i < DIMENSION-1  &&  field[i+1][j] == EMPTY ) {
            i++;
            field[i][j] = ch;
            tried = 0xF;
          } else {
            tried |= 2;
          }
          break;
        case EAST:
          if ( j < DIMENSION-1  &&  i >= 0  &&  field[i][j+1] == EMPTY ) {
            j++;
            field[i][j] = ch;
            tried = 0xF;
          } else {
            tried |= 4;
          }
          break;
        case WEST:
          if ( j > 0  &&  i >= 0  &&  field[i][j-1] == EMPTY ) {
            j--;
            field[i][j] = ch;
            tried = 0xF;
          } else {
            tried |= 8;
          }
          break;
      }
    }
  }
  print_field(field);

  exit(EXIT_SUCCESS);
}

void print_field(int field[DIMENSION][DIMENSION]) {
  for (int row = 0; row < DIMENSION; row++) {
    for (int col = 0; col < DIMENSION; col++) {
      printf("%2c ", field[row][col]);
    }

    printf("\n");
  }
}
