//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>

TEST_F(LeapTestCase, IfCasesTest) {
  ASSERT_FALSE(IsLeap(1));
  ASSERT_FALSE(IsLeap(17));
  ASSERT_FALSE(IsLeap(2001));
  ASSERT_FALSE(IsLeap(1993));
  ASSERT_FALSE(IsLeap(3100));

  ASSERT_TRUE(IsLeap(400));
  ASSERT_TRUE(IsLeap(888));
  ASSERT_TRUE(IsLeap(1996));
  ASSERT_TRUE(IsLeap(2020));
}

TEST_F(LeapTestCase, ValueErrorTest) {
  ASSERT_THROW(IsLeap(0), std::invalid_argument);
  ASSERT_THROW(IsLeap(-25), std::invalid_argument);
}
