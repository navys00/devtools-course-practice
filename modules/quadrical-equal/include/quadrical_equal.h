// Copyright 2023 Popov Andrey

#ifndef MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_
#define MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_

//! @addtogroup quadrical-equal
//! @{

/**
 * @brief the class solves the quadratic equation for 3 cases
 *
 * the quadratic equation is an expression of the form ax^2+bx+c=0
 */
class Quadrical_equal {
 public:
    Quadrical_equal();

    /**
     * @brief Solution
     * @param[in] multiplier a
     * @param[in] multiplier b
     * @param[in] multiplier c
     */
    float solution(int a, int b, int c);

 private:
    int x1, x2, a, b, c;
    float D = 0;
};

//! @}

#endif  // MODULES_QUADRICAL_EQUAL_INCLUDE_QUADRICAL_EQUAL_H_
