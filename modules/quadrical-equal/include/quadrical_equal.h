// Copyright 2023 Popov Andrey

#ifndef MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_
#define MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_

#include <iostream>
#include <string>

class Quadrical_equal {
 private:
  int x1, x2, a, b, c;
  float D = 0;

 public:
  Quadrical_equal();
  float solution(int a, int b, int c);
};

#endif  // MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_
