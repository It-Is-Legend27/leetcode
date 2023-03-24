/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 8.
 * @version 0.1
 * @date 2023-03-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include <string>
using namespace std;

class Solution
{
public:
    bool isOverflow(int x)
    {
        return (((INT_MAX) / 10) < x && x > 0) || ((INT_MIN / 10) > x && x < 0);
    }

    int myAtoi(string s)
    {
        int result = 0;

        

        for (auto &&c : s)
        {
            result = result * 10 + (c -'0');
        }
        

        return result;
    }
};