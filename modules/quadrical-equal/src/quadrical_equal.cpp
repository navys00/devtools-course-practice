// Copyright 2023 Popov Andrey

#include <stdbool.h>

#include <limits>
#include <cmath>

#include "include/quadrical_equal.h"

Quadrical_equal::Quadrical_equal() {
  x1 = 0;
  x2 = 0;
  this->a = 0;
  this->b = 0;
  this->c = 0;
}

float Quadrical_equal::solution(int a, int b, int c) {
  this->a = a;
  this->b = b;
  this->c = c;
  D = b * b - 4 * a * c;
  if (D > 0) {
    x1 = ((-b) + sqrt(D)) / (2 * a);
    x2 = ((-b) - sqrt(D)) / (2 * a);
    return x1, x2;
  }
  if (D == 0) {
    x1 = -(b / (2 * a));
    return x1;
  }
  if (D < 0) {
    return -1;
  }
}
