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
 *      230711  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10
#define EMPTY '.'

enum direction {UP, DOWN, LEFT, RIGHT, BLOCKED};
typedef enum direction direction_t;

void initialize(char grid[N][N]);
enum direction next_move(char grid[N][N], int i, int j);
bool is_blocked(char grid[N][N], int i, int j, direction_t direction);
void print_board(char grid[N][N]);

int main(void) {
  char grid[N][N];

  initialize(grid);

  int row = rand() % N;
  int col = rand() % N;
  int count = 0;
  while ( count < 26 ) {
    grid[row][col] = 'A' + count;
    direction_t d = next_move(grid, row, col);

    if ( d == BLOCKED ) {
      break;
    } else {
      switch ( d ) {
        case UP: row--; break;
        case DOWN: row++; break;
        case LEFT: col--; break;
        case RIGHT: col++; break;
      }
    }
    count++;
  }

  print_board(grid);

  exit(EXIT_SUCCESS);
}

void initialize(char grid[N][N]) {
  srand((unsigned int) time(NULL));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      grid[i][j] = EMPTY;
    }
  }
}

void print_board(char grid[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf(" %c ", grid[i][j]);
    }
    printf("\n");
  }
}
  
direction_t next_move(char grid[N][N], int row, int col) {
  int available_moves = 4;
  bool available[4] = {true, true, true, true};

  direction_t directions[4] = {UP, DOWN, LEFT, RIGHT};

  for (int i = 0; i < 4; i++) {
    if ( is_blocked(grid, row, col, directions[i]) ) {
      available[i] = false;
      available_moves--;
    }
  }

  if ( available_moves == 0 ) {
    return BLOCKED;
  } else {
    int direction = rand() % available_moves + 1;
    for (int i = 0; i < 4; i++) {
      if ( available[i] ) {
        direction--;
      }
      
      if ( direction == 0 ) {
        return directions[i];
      }
    }
  }

  return BLOCKED; // ???
}

bool is_blocked(char grid[N][N], int row, int col, direction_t direction) {
  switch ( direction ) {
    case UP:
      return row == 0  ||  grid[row-1][col] != EMPTY;
    case DOWN:
      return row == N-1  ||  grid[row+1][col] != EMPTY;
    case LEFT:
      return col == 0  ||  grid[row][col-1] != EMPTY;
    case RIGHT:
      return col == N-1  ||  grid[row][col+1] != EMPTY;
      //    case BLOCKED:
    default:
      return true; // ??
  }
}
