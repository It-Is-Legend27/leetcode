/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 29.
 * @version 0.1
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include <limits>
using namespace std;

/// @brief Credit to harshit7962, modified his solution to fully adhere to limitations specified in the problem.
/// I.e, only use 32-bit integer types
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        
        if (dividend == numeric_limits<int>::min() && divisor == -1)
            return numeric_limits<int>::max();
        if (dividend == numeric_limits<int>::min() && divisor == 1)
            return numeric_limits<int>::min();

        unsigned int divd = abs(dividend);
        unsigned int divr = abs(divisor);

        int quotient = 0;

        while (divr <= divd)
        {
            unsigned int mul = divr, tmp = 1;
            
            while (mul <= divd - mul)
            {
                mul += mul;
                tmp += tmp;
            }

            quotient += tmp;
            divd -= mul;
        }
        
        if(dividend < 0 ^ divisor < 0)
            return -quotient;

        return quotient;
    }
};