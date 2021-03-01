// Copyright 2021 Rinat Mukaev <rinamuka4@gmail.com>

#include <gtest/gtest.h>
#include "simple_stack.hpp"
#include "iostream"


TEST(simpleStack, constrWithNoArgument) {
  Stack<int> stackObj;
  int k = 5;
  int m = 10;
  stackObj.push(k);
  stackObj.push(m);
  ASSERT_EQ(stackObj.head(), 10);
}

TEST(simpleStack, constrWithRValue) {
  Stack<int> stackObj;
  stackObj.push(8);
  Stack<int> stack = Stack(std::move(stackObj));
  ASSERT_EQ(stack.head(), 8);
}

TEST(simpleStack, pushRValue) {
  Stack<int> stackObj;
  stackObj.push(std::move(8));
  stackObj.push(std::move(4));
  ASSERT_EQ(stackObj.head(), 4);
}

TEST(simpleStack, pushLValue) {
  Stack<int> stackObj;
  int k = 3;
  int a = 18;
  stackObj.push(k);
  stackObj.push(a);
  ASSERT_EQ(stackObj.head(), 18);
}

TEST(simpleStack, pop) {
  Stack<int> stackObj;
  int k = 3;
  int a = 18;
  stackObj.push(k);
  stackObj.push(a);
  stackObj.pop();
  ASSERT_EQ(stackObj.head(), 3);
}



