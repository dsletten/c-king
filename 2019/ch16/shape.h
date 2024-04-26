/*
 *
 *   File:
 *      shape.h
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200708  Original.
 *
 */

#ifndef SHAPE_H
#define SHAPE_H

typedef struct point point;
struct point {
  int x, y;
};

typedef struct rectangle rectangle;
struct rectangle {
  point upper_left, lower_right;
};

enum shape_type {rect, circle};
//enum shape {rectangle, circle};

typedef struct shape shape;
struct shape {
  enum shape_type kind;
  point center;
  union {
    struct {
      int length, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
};

int width(rectangle r);
int height(rectangle r);
int area(rectangle r);
point center(rectangle r);
rectangle translate(rectangle r, int x, int y);
#endif
