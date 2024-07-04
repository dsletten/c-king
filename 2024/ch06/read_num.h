/*
 *
 *   File:
 *      read_num.h
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240609  Original.
 *
 */

#ifndef READ_NUM_H
#define READ_NUM_H

#include <stdio.h>

double read_double(char* prompt);
double read_double_min_max(char* prompt, double min, double max);

int read_int_no_prompt();
int read_int(char* prompt);
int read_int_min(char* prompt, int min);
int read_int_min_max(char* prompt, int min, int max);

void read_fraction(char* prompt, int* numerator, int* denominator);

#endif
