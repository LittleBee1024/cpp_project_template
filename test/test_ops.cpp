#include "./internal/ops.h"

#include <gtest/gtest.h>

using namespace DEMO;

TEST(example, add) {
  double res;
  res = Op::add_numbers(1.0, 2.0);
  ASSERT_NEAR(res, 3.0, 1.0e-11);
}

TEST(example, subtract) {
  double res;
  res = Op::subtract_numbers(1.0, 2.0);
  ASSERT_NEAR(res, -1.0, 1.0e-11);
}

