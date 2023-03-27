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
#include <unordered_map>
using namespace std;


// TODO: Does not work for 6 instances of subtraction.
/// I.e, IV, IX, XL, XC, CD, CM.
class Solution
{
public:
    static unordered_map<char,int> Numerals;

    int romanToInt(string s)
    {
        int val = 0;

        for (auto &&c : s)
            val += Numerals[c];
        return val;
    }
};

unordered_map<char,int> Solution::Numerals =
{
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};