//
// Created by akhtyamovpavel on 5/1/20.
//

#include "TreeTestCase.h"
#include "Tree.h"

TEST(TreeTestCase, PathDoesntExist) {
  EXPECT_THROW(GetTree("/not/invalid/path", true), std::invalid_argument);
  EXPECT_THROW(GetTree("/not/invalid/path", false), std::invalid_argument);
}

TEST(TreeTestCase, Directory) {
  ASSERT_TRUE(GetTree(".", false).is_dir);
  EXPECT_NO_THROW(GetTree(".", true));
  EXPECT_NO_THROW(GetTree(".", false));
}

TEST(TreeTestCase, NotDirectory) {
  EXPECT_THROW(GetTree("/bin/echo", false), std::invalid_argument);
  EXPECT_THROW(GetTree("/bin/echo", true), std::invalid_argument);
}

TEST(TreeTestCase, Parameters) {
  ASSERT_GE(GetTree(".", true).children.size(), 0);
  ASSERT_TRUE(GetTree(".", true) == GetTree("./././", true));
  ASSERT_TRUE(GetTree(".", false) == GetTree("./././", false));
}