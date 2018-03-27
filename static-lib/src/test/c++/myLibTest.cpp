#include <gtest/gtest.h>
#include "myLib.h"

TEST (MyLibTest, getNum)
{
  NarIsAwesome a;
  ASSERT_EQ(43, a.getNum());
}