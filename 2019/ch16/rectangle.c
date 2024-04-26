/*
 *
 *   File:
 *      rectangle.c
 *
 *   Synopsis:
 *      Exercise 5 ch. 16
 *      - Assumes origin is upper left corner of screen. Thus, right => increasing x, down => increasing y
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200608  Original.
 *
 */

#include "shape.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  {
    rectangle r = {{10, 20}, {30, 30}};

    printf("Width: %d\n", width(r));
    printf("Height: %d\n", height(r));
    printf("Area: %d\n", area(r));

    point c = center(r);
    printf("Center: (%d, %d)\n", c.x, c.y);

    printf("Move...\n");
    rectangle r1 = translate(r, 10, 10);
    c = center(r1);
    printf("Center: (%d, %d)\n", c.x, c.y);

    printf("Move...\n");
    r1 = translate(r, -10, -20);
    c = center(r1);
    printf("Center: (%d, %d)\n", c.x, c.y);
  }

  exit(EXIT_SUCCESS);
}
