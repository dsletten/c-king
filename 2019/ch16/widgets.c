/*
 *
 *   File:
 *      widgets.c
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
#include <string.h>

/* enum widget_tag {count_widget, value_widget, name_widget}; */

struct WIDGET {
  /* enum widget_tag tag; */
  enum {count_widget, value_widget, name_widget} tag;
  union {
    long count;
    double value;
    char name[10];
  };
};

typedef struct WIDGET widget;

void print_widget(widget w);

int main(void) {
  widget w = {count_widget, 10000};

  print_widget(w);

  w.tag = value_widget;
  w.value = 3.14159;

  print_widget(w);

  w.tag = name_widget;
  strncpy(w.name, "Flingus", 10);

  print_widget(w);

  exit(EXIT_SUCCESS);
}

void print_widget(widget w) {
  switch ( w.tag ) {
    case count_widget: printf("Count %ld\n", w.count);
                       return;
    case value_widget: printf("Value %f\n", w.value);
                       return;
    case name_widget:  printf("Name \"%s\"\n", w.name);
                       return;
  }
}
