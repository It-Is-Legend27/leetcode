/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 7.
 * @version 0.1
 * @date 2023-03-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
using namespace std;

class Solution
{
public:
    bool isOverflow(int res)
    {
        return (((INT_MAX) / 10) < res && res > 0) || ((INT_MIN / 10) > res && res < 0);
    }
    int reverse(int x)
    {
        int result = 0;

        while (x)
        {
            if (isOverflow(result))
                return 0;

            result = result * 10 + x % 10;
            x /= 10;
        }

        return result;
    }
};