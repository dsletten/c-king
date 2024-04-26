/*
 *
 *   File:
 *      cons.h
 *
 *   Synopsis:
 *      Inspired by (but improved on) Foundations of CS pg. 23
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200615  Original.
 *
 */

#ifndef CONS_H
#define CONS_H

#define DefCons(elt_type)                                \
  typedef struct elt_type##_cons *elt_type##_list;       \
  typedef struct elt_type##_cons {                       \
    elt_type car;                                        \
    elt_type##_list cdr;                                 \
  } elt_type##_cons

#endif

/* #endif */
