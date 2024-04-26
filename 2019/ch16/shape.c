/*
 *
 *   File:
 *      shape.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200708  Original.
 *
 */
#include "shape.h"

/*
 *    Width of rectangle is difference of x-coordinates.
 */
int width(rectangle r) {
  return r.lower_right.x - r.upper_left.x;
}

/*
 *    Height of rectangle is difference of y-coordinates.
 */
int height(rectangle r) {
  return r.lower_right.y - r.upper_left.y;
}

int area(rectangle r) {
  return width(r) * height(r);
}

point center(rectangle r) {
  point c = {(r.upper_left.x + r.lower_right.x) / 2, (r.upper_left.y + r.lower_right.y) / 2};
  /* point c = {r.upper_left.x + (width(r) / 2), r.upper_left.y + (height(r) / 2)}; */
  return c;
}

rectangle translate(rectangle r, int delta_x, int delta_y) {
  rectangle r1 = {{r.upper_left.x + delta_x, r.upper_left.y + delta_y},
                  {r.lower_right.x + delta_x, r.lower_right.y + delta_y}};
  return r1;
}
