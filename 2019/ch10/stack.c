/*
 *
 *   File:
 *      stack.c
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
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE]; // Nothing to initialize...Stack should start empty
int top = 0;

void empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int n) {
  if ( is_full() ) {
    stack_overflow();  // Signal some sort of error
  } else {
    contents[top++] = n;
  }
}

int pop(void) {
  if ( is_empty() ) {
    stack_underflow();  // Error
  } else {
    return contents[--top]; // contents[top] is location for next elt.
  }
}

int main(void) {

  exit(EXIT_SUCCESS);
}
