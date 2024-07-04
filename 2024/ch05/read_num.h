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
 *      240521  Original.
 *
 */

#ifndef READ_NUM_H
#define READ_NUM_H

#include <stdio.h>

int read_int_(char* prompt);
int read_int(char* prompt, int min, int max);
double read_double(char* prompt, double min, double max);

#endif
