/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 140.
 * @version 0.1
 * @date 2023-03-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> wordSet;

        // Store words from wordDict into wordSet for fast lookup
        for (auto &&i : wordDict)
            wordSet.insert(i);

        
    }
};