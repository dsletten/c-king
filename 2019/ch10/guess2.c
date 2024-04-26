/*
 *
 *   File:
 *      guess2.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200427  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_NUMBER 100

void initialize_generator(void);

//    Completely non-FP! void functions with no params...
//    Everything relies on side effects with external variable.
int choose_new_secret(void);
void play(int);

int main(void) {
  char command;

  initialize_generator();

  printf("Guess the secret number between 1 and %d\n\n", MAX_NUMBER);

  do {
    int secret = choose_new_secret();
    printf("A new number has been chosen.\n");

    play(secret);
    
    printf("Play again? (Y/N) ");
    scanf(" %c", &command);
    printf("\n");
  } while ( command == 'y'  ||  command == 'Y' );

  exit(EXIT_SUCCESS);
}

void initialize_generator(void) {
  srand((unsigned) time(NULL));
}

int choose_new_secret(void) {
  return rand() % MAX_NUMBER + 1;
}

void play(int secret) {
  int guess, num_guesses = 0;

  while ( true ) {
    printf("Enter guess: ");
    scanf("%d", &guess);
    num_guesses++;

    if ( guess == secret ) {
      printf("You won in %d %s!\n\n", num_guesses, num_guesses == 1 ? "guess" : "guesses");
      return;
    } else if ( guess < secret ) {
      printf("Too low; try again.\n");
    } else {
      printf("Too high; try again.\n");
    }
  }
}
