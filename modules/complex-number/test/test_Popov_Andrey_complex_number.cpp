// Copyright 2023 Popov Andrey

#include <gtest/gtest.h>

#include <tuple>
#include "include/complex_number.h"

TEST(Popov_A_complex_number, Non_Zero_Division) {
  ComplexNumber num1(2, 2);
  ComplexNumber zero = ComplexNumber(0,0);

  ASSERT_THROW((num1 / zero), std::string);
}

TEST(Popov_A_complex_number, Sum) {
  ComplexNumber z1(1.0, 0.0);
  ComplexNumber z2(0.0, 1.0);

  ComplexNumber z1_plus_z2 = z1 + z2;

  EXPECT_EQ(z1_plus_z2, ComplexNumber(1.0, 1.0));
}

TEST(Popov_A_complex_number, Multiply) {
  ComplexNumber z1(5.0, 5.0);
  ComplexNumber z2(3.0, 3.0);

  ComplexNumber z1_M_z2 = z1 * z2;

  EXPECT_EQ(z1_M_z2, ComplexNumber(0,30));
}
