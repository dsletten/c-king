/*
 *
 *   File:
 *      parts.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200531  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct part {
  int number;
  char name[31];
  int on_hand;
};

struct part build(int number, const char *name, int on_hand);

int main(void) {
  struct {
    int number;
    char name[31];
    int on_hand;
  } part1, part2;

  printf("%p\n%p\n%p\n", &part1.number, &part1.name, &part1.on_hand);
  printf("%p\n%p\n%p\n", &part2.number, &part2.name, &part2.on_hand);

  printf("%lu\n", (unsigned long) sizeof part1);
  printf("%lu\n", (unsigned long) sizeof part1.number);
  printf("%lu\n", (unsigned long) sizeof part1.name);
  printf("%lu\n", (unsigned long) sizeof part1.on_hand);

  {
    struct {
      int number;
      char name[31];
      int on_hand;
    } part1 = {24, "Disk drive", 10},
        part2 = {35, "Printer cable", 8};
    
    part2 = part1;
    printf("%s\n", part1.name);
    printf("%s\n", part2.name);
    printf("%p\n", &part1.name);
    printf("%p\n", &part2.name);
    
    /* part1.name = "pung"; */
    strcpy(part1.name, "pung");
    printf("%s\n", part1.name);
    printf("%s\n", part2.name);
    printf("%p\n", &part1.name);
    printf("%p\n", &part2.name);
  }

  /* { */
  /*   struct part { */
  /*     int number; */
  /*     char name[31]; */
  /*     int on_hand; */
  /*   }; */

  /*   struct part part1 = { .number = 24, .name = "Disk drive", .on_hand = 10}, */
  /*     part2 = {.name = "Printer cable"}; */

  /*   printf("%d\n", part1.number); */
  /*   printf("%s\n", part1.name); */
  /*   printf("%d\n", part1.on_hand); */
  /*   printf("%d\n", part2.number); */
  /*   printf("%s\n", part2.name); */
  /*   printf("%d\n", part2.on_hand); */
  /* } */


  printf("Building a part:\n");
  struct part p = build(18, "Foo splicer", 12);
  printf("%d\n", p.number);
  printf("%s\n", p.name);
  printf("%d\n", p.on_hand);
  
  printf("Array of parts:\n");
  struct part parts[10];

  printf("Size of 1 part: %lu\n", (unsigned long) sizeof p);
  printf("Size of array of 10 parts: %lu\n", (unsigned long) sizeof parts);

  printf("%p\n", &(parts[0].on_hand));
  printf("%p\n", &parts[1]);

  exit(EXIT_SUCCESS);
}

struct part build(int number, const char *name, int on_hand) {
  /* struct part p = {number, name, on_hand}; */
  struct part p = {.number=number, .on_hand=on_hand};

  /* struct part p; */

  /* p.number = number; */
  strcpy(p.name, name);
  /* p.on_hand = on_hand; */

  return p;
}
