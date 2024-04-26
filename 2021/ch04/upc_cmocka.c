/*
 *
 *   File:
 *      upc_cmocka.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      210827  Original.
 *
 */

#include "upc.h"
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <cmocka.h>

void valid_check_digit(void **state) {
  int digits[][12] = {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 5},
    {0, 8, 4, 5, 1, 1, 3, 0, 6, 4, 4, 8},
    {0, 2, 4, 6, 0, 0, 0, 1, 0, 0, 3, 0},
    {0, 3, 7, 0, 0, 0, 0, 0, 4, 0, 7, 3},
    {0, 3, 1, 2, 0, 0, 0, 1, 0, 0, 5, 6},
    {0, 5, 0, 4, 2, 8, 2, 6, 8, 5, 1, 3},
    {0, 3, 7, 4, 6, 6, 0, 8, 3, 3, 1, 5},
    {0, 5, 2, 0, 0, 0, 0, 4, 1, 4, 4, 6},
    {8, 5, 3, 4, 8, 0, 0, 1, 0, 0, 0, 3},
    {0, 7, 7, 8, 9, 0, 1, 7, 0, 7, 9, 3}
  };

  for (int i = 0; i < 2; i++) {
    assert_true(validate_check_digit(digits[i]));
  }
}

void invalid_check_digit(void **state) {
  int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2};

  assert_false(validate_check_digit(digits));
}

void test_junk_upc(void **state) {
  int digits[] = {0, 1, 2, -3, 4, 5, 66, 7, 8, 9, 0, 5};

  assert_false(validate_check_digit(digits));
}

int setup(void** state) {
  return 0;
}

int tear_down(void** state) {
  return 0;
}

int main(void) {
  const struct CMUnitTest tests[] = {
    cmocka_unit_test(valid_check_digit),
    cmocka_unit_test(invalid_check_digit),
    cmocka_unit_test(test_junk_upc)
  };
  return cmocka_run_group_tests(tests, setup, tear_down);
}
