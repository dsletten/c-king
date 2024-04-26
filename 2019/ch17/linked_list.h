/*
 *
 *   File:
 *      linked_list.h
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200705  Original.
 *
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "cons.h"

DefCons(double);

double_cons fake_cons(double car, double_cons *cdr);
double_list cons(double car, double_list cdr);
double car(double_list l);
double_list cdr(double_list l);
double cadr(double_list l);
double caddr(double_list l);
void print_list(double_list l);
double_list member(double obj, double_list l);
double_list delete(double target, double_list l);
void delete2(double target, double_list l);
void delete3(double target, double_list l);
void delete4(double target, double_list *l);
double_list insert(double elt, double_list l);
void insert2(double elt, double_list *l);
void free_list(double_list l);

#endif
