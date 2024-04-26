/*
 *
 *   File:
 *      comments.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191203  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {//   Preprocessor produces <built-in>
//     printf("%d\n", 201112L);
printf("%ld\n", __STDC_VERSION__);/*   */exit(EXIT_SUCCESS);
}
