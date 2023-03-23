/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 9.
 * @version 0.1
 * @date 2023-03-20
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
    bool isPalindrome(int x)
    {
        string fwd = to_string(x);
        string bwkd = fwd;
        reverse(bwkd.begin(), bwkd.end());
        return fwd == bwkd;
    }
};