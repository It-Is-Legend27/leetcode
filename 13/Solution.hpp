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

class Solution
{
public:
    static unordered_map<char, int> Numerals;

    static unordered_map<string, int> Subs;

    int romanToInt(string s)
    {
        int val = 0;

        // For each "subtraction", find and remove each instance,
        // and update val
        for (auto &&i : Subs)
        {
            int idx = 0;

            // Search for current subtraction,
            // and remove all instances from string, while
            // updating val
            do
            {
                idx = s.find(i.first);
                if(idx != string::npos)
                {
                    s.erase(idx, i.first.size());
                    val += i.second;
                }
            } while (idx != string::npos);
        }
        
        // Add all remaining symbols as normal
        for (auto &&c : s)
            val += Numerals[c];

        return val;
    }
};

// 
unordered_map<char, int> Solution::Numerals =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

unordered_map<string, int> Solution::Subs =
    {
        {"IV", 4},
        {"IX", 9},
        {"XL", 40},
        {"XC", 90},
        {"CD", 400},
        {"CM", 900}};