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
#include <regex>
using namespace std;

class Solution
{
public:
    bool isOverflow(int x)
    {
        return (((INT_MAX) / 10) < x && x > 0);
    }

    bool isUnderflow(int x)
    {
        return ((INT_MIN / 10) > x && x < 0);
    }

    string trimLeadingWS(const std::string &str)
    {
        return std::regex_replace(str, std::regex("^ +"), "");
    }

    bool isInt(const string& s)
    {
        // False if empty string
        if(s.empty())
        return false;

        // If first char is not sign or digit, false
        if(s[0] != '-' && s[0] != '+' && !isdigit(s[0]))
        return false;

        // If preceeding char is not digit, false
        if(s.begin()+1 == s.end() || !isdigit(*(s.begin()+1)))
        return false;

        return true;
    }

    int myAtoi(string s)
    {
        s = trimLeadingWS(s);

        if(!isInt(s))
        return 0;

        int result = 0;
        bool isNegative;

        // Determine if integer is positive or negative,
        // remove sign char if exists
        switch (s[0])
        {
        case '-':
            isNegative = true; s = s.substr(1);
            break;
        case '+':
            isNegative = false; s = s.substr(1);
            break;
        default:
            isNegative = false;
            break;
        }
        
        // Convert string to int
        for (auto &&c : s)
        {
            if(isOverflow(-result))
            return INT_MAX;

            if(isUnderflow(result))
            return INT_MIN;

            if(!isdigit(c))
            return result;

            result = result * 10 + (c - '0');
        }

        return (isNegative) ? result*-1 : result;
    }
};