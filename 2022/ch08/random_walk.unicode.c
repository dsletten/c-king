/*
 *
 *   File:
 *      random_walk.unicode.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230723  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <wchar.h>
#include <locale.h>

#define N 10
#define EMPTY '.'

enum direction {UP, DOWN, LEFT, RIGHT, BLOCKED};
typedef enum direction direction_t;

//    These up/down arrows are weirdly narrow and screw up alignment!!!
//const wchar_t arrows[] = {0x2B61, 0x2B63, 0x2B60, 0x2B62};
//const wchar_t arrows[] = {0xFFEA, 0xFFEC, 0xFFE9, 0xFFEB};
const wchar_t arrows[] = {0x2191, 0x2193, 0x2190, 0x2192};

void initialize(wchar_t grid[2*N][2*N]);
enum direction next_move(wchar_t grid[2*N][2*N], int i, int j);
bool is_blocked(wchar_t grid[2*N][2*N], int i, int j, direction_t direction);
void print_board(wchar_t grid[2*N][2*N]);

int main(void) {
  setlocale(LC_CTYPE, "en_US.UTF-8");
  wchar_t grid[2*N][2*N];

  initialize(grid);

  int row = 2 * (rand() % N);
  int col = 2 * (rand() % N);
  int count = 0;
  while ( count < 26 ) {
    grid[row][col] = 'A' + count;
    if ( count < 25 ) {
      direction_t d = next_move(grid, row, col);

      if ( d == BLOCKED ) {
        break;
      } else {
        switch ( d ) {
          case UP:
            grid[row-1][col] = arrows[d];
            row -= 2;
            break;
          case DOWN:
            grid[row+1][col] = arrows[d];
            row += 2;
            break;
          case LEFT:
            grid[row][col-1] = arrows[d];
            col -= 2;
            break;
          case RIGHT:
            grid[row][col+1] = arrows[d];
            col += 2;
            break;
        }
      }
    }
    count++;
  }

  print_board(grid);

  exit(EXIT_SUCCESS);
}

void initialize(wchar_t grid[2*N][2*N]) {
  srand((unsigned int) time(NULL));

  for (int i = 0; i < 2*N; i += 2) {
    for (int j = 0; j < 2*N; j += 2) {
      grid[i][j] = EMPTY;
      grid[i][j+1] = ' ';
      grid[i+1][j] = ' ';
      grid[i+1][j+1] = ' ';
    }
  }
}

void print_board(wchar_t grid[2*N][2*N]) {
  for (int i = 0; i < 2*N; i++) {
    for (int j = 0; j < 2*N; j++) {
      putwchar(grid[i][j]);
      putwchar(' ');
    }
    wprintf(L"\n");
  }
}
  
direction_t next_move(wchar_t grid[2*N][2*N], int row, int col) {
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

bool is_blocked(wchar_t grid[2*N][2*N], int row, int col, direction_t direction) {
  switch ( direction ) {
    case UP:
      return row == 0  ||  grid[row-2][col] != EMPTY;
    case DOWN:
      return row == N-1  ||  grid[row+2][col] != EMPTY;
    case LEFT:
      return col == 0  ||  grid[row][col-2] != EMPTY;
    case RIGHT:
      return col == N-1  ||  grid[row][col+2] != EMPTY;
      //    case BLOCKED:
    default:
      return true; // ??
  }
}
