/*
 *
 *   File:
 *      utils.h
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230623  Original.
 *
 */

#ifndef UTILS_H
#define UTILS_H

int get_int(char *prompt);

int get_int_min(char *prompt, int min);

int get_int_in_range(char *prompt, int min, int max);

long get_long(char *prompt);

long get_long_in_range(char *prompt, long min, long max);

#endif
