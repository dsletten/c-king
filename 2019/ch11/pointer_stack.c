/*
 *
 *   File:
 *      pointer_stack.c
 *
 *   Synopsis:
 *      Section 10.2 updated with pointer (Section 12.2)
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200503  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE]; // Nothing to initialize...Stack should start empty
int *top = &contents[0];

void empty(void) {
  top = &contents[0];
}

bool is_empty(void) {
  return top == &contents[0];
}

bool is_full(void) {
  return top == &contents[STACK_SIZE];
}

void push(int n) {
  if ( is_full() ) {
    //    stack_overflow();  // Signal some sort of error
  } else {
    *top++ = n;
  }
}

int pop(void) {
  if ( is_empty() ) {
    //    stack_underflow();  // Error
    return -1;
  } else {
    return *--top;
  }
}

int main(void) {
  printf("Start. %p\n", top);

  push(10);
  printf("Push 10 %p\n", top);

  push(20);
  printf("Push 20 %p\n", top);

  printf("Empty? %s\n", is_empty() ? "true" : "false");
  printf("Full? %s\n", is_full() ? "true" : "false");

  printf("Pop %d %p\n", pop(), top);

  empty();

  printf("Empty? %s\n", is_empty() ? "true" : "false");
  printf("Full? %s\n", is_full() ? "true" : "false");

  printf("Done. %p\n", top);

  exit(EXIT_SUCCESS);
}
