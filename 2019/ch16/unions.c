/*
 *
 *   File:
 *      unions.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200606  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TITLE_LENGTH 30
#define AUTHOR_LENGTH 30
#define DESIGN_LENGTH 30

int main(void) {
  union {
    int i;
    double d;
  } u;

  u.i = 82;
  printf("%d\n", u.i);

  u.d = 74.8;
  printf("%f\n", u.d);

  {
    union {
      int i;
      double d;
    } u = {234};
    printf("%d\n", u.i);
  }

  {
    union {
      int i;
      double d;
    } u = { .d = 99.99 };
    printf("%f\n", u.d);
  }

  {
    struct catalog_item {
      int stock_number;
      double price;
      int item_type;
      union {
        struct {
          char title[TITLE_LENGTH+1];
          char author[AUTHOR_LENGTH+1];
          int n_pages;
        } book;
        struct {
          char design[DESIGN_LENGTH+1];
        } mug;
        struct {
          char design[DESIGN_LENGTH+1];
          int color;
          int sizes;
        } shirt;
      } item;
    };

    struct catalog_item c = {223, 4.5, 0, {"Ghost Rider", "Neil Peart", 400}};
    printf("%s\n", c.item.book.title);
    /* printf("%s\n", c.book.title); */
    struct catalog_item c2 = {449, 2.17, 1, {.mug = {"Garish"}}};
    printf("%s\n", c2.item.mug.design);

  }

  {
    struct catalog_item {
      int stock_number;
      double price;
      int item_type;
      union {
        struct {
          char title[TITLE_LENGTH+1];
          char author[AUTHOR_LENGTH+1];
          int n_pages;
        } book;
        struct {
          char design[DESIGN_LENGTH+1];
        } mug;
        struct {
          char design[DESIGN_LENGTH+1];
          int color;
          int sizes;
        } shirt;
      };
    };

    struct catalog_item c = {223, 4.5, 0, {"Ghost Rider", "Neil Peart", 400}};
    /* printf("%s\n", c.item.book.title); */
    printf("%s\n", c.book.title);
    printf("%p\n", &c.book.title);
    printf("%p\n", &c.mug.design);
    printf("%p\n", &c.shirt.design);

    struct catalog_item c2 = {449, 2.17, 1, {.mug = {"Garish"}}};
    printf("%s\n", c2.mug.design);
  }

  exit(EXIT_SUCCESS);
}
