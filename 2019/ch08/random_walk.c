/*
 *
 *   File:
 *      random_walk.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200311  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define DIRECTIONS 4
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define EMPTY '.'

char field[SIZE][SIZE];

void initialize();
void print_field();
bool is_blocked(int direction, int row, int col);
void make_move(int direction, int *row, int *col);

int main(void) {
  initialize();
  srand((unsigned) time(NULL));
  
  int location_row = 0;
  int location_col = 0;
  unsigned char step = 'A';

  while ( step <= 'Z' ) {
    bool attempted[DIRECTIONS] = {false};
    field[location_row][location_col] = step;
    step++;

    while ( true ) {
      int direction = rand() % DIRECTIONS;
      attempted[direction] = true;

      if ( is_blocked(direction, location_row, location_col) ) {
	int i;
	for (i = 0; i < DIRECTIONS; i++) {
	  if ( !attempted[i] ) {
	    break;
	  }
	}

	if ( i == DIRECTIONS ) {
	  print_field();
	  exit(EXIT_SUCCESS);
	}
      } else {
	make_move(direction, &location_row, &location_col);
	break;
      }
    }
  }    

  print_field();
}
  
void initialize() {
  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
      field[row][col] = EMPTY;
    }
  }
}

void print_field() {
  for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
      printf("%-2c", field[row][col]);
    }
    printf("\n");
  }
}  

bool is_blocked(int direction, int row, int col) {
  //  printf("Checking %d %d %d\n", direction, row, col);
  switch ( direction ) {
    case UP:
      if ( row == 0  ||  field[row-1][col] != EMPTY ) {
	return true;
      } else {
	return false;
      }
    case RIGHT:
      if ( col == SIZE-1  ||  field[row][col+1] != EMPTY ) {
	return true;
      } else {
	return false;
      }
    case DOWN:
      if ( row == SIZE-1  ||  field[row+1][col] != EMPTY ) {
	return true;
      } else {
	return false;
      }
    case LEFT:
      if ( col == 0  ||  field[row][col-1] != EMPTY ) {
	return true;
      } else {
	return false;
      }      
  }
}

void make_move(int direction, int *row, int *col) {
  //  printf("  Moving %d\n", direction);
  switch ( direction ) {
    case UP:
      (*row)--;
      break;
    case RIGHT:
      (*col)++;
      break;
    case DOWN:
      (*row)++;
      break;
    case LEFT:
      (*col)--;
      break;
  }
}
