//
// Created by akhtyamovpavel on 5/1/20.
//

#include "TreeTestCase.h"
#include "Tree.h"

TEST(TreeTest, PathDoesntExistTest){
  EXPECT_THROW(GetTree("/not/invalid/path", true), std::invalid_argument);
  EXPECT_THROW(GetTree("/not/invalid/path", false), std::invalid_argument);
}

TEST(TreeTest, DirectoryTest){
  ASSERT_TRUE(GetTree(".", false).is_dir);
  EXPECT_NO_THROW(GetTree(".", true));
  EXPECT_NO_THROW(GetTree(".", false));
}

TEST(TreeTest, NotDirectoryTest){
  EXPECT_THROW(GetTree("/bin/echo", false), std::invalid_argument);
  EXPECT_THROW(GetTree("/bin/echo", true), std::invalid_argument);
}

TEST(TreeTest, ParametersTest) {
  ASSERT_GE(GetTree(".", true).children.size(), 0);
  ASSERT_TRUE(GetTree(".", true) == GetTree("./././", true));
  ASSERT_TRUE(GetTree(".", false) == GetTree("./././", false));
}