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
    int myAtoi(string s)
    {
        int size = s.size();
        long double result = 0;
        int idx = 0;
        bool isNegative;

        while (s[idx] == ' ')
            idx++;

        switch (s[idx])
        {
        case '+':
            isNegative = false;
            idx++;
            break;
        case '-':
            isNegative = true;
            idx++;
            break;
        default:
            break;
        }

        for (; idx < size && s[idx] >= '0' && s[idx] <= '9'; idx++)
        {
            result = result * 10 + (s[idx] - '0');
        }

        result = isNegative ? -result : result;

        result = (result > INT_MAX) ? INT_MAX : result;
        result = (result < INT_MIN) ? INT_MIN : result;

        return int(result);
    }
};