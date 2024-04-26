/*
 *
 *   File:
 *      ex11.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200711  Original.
 *
 */

#include "shape.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  shape s;
  s.kind = rect;
  s.center.x = 10;
  s.u.rectangle.length = 25;
  s.u.rectangle.width = 8;

  s.u.circle.radius = 5;

  exit(EXIT_SUCCESS);
}
