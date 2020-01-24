#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyInfo();
  std::string expected = "Anuj Patil\nGraduate student\nComputer Engineering";
  EXPECT_EQ(expected, actual);
}