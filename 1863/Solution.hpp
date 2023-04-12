#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 1863.
 * @version 0.1
 * @date 2023-04-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <vector>
using namespace std;

class Solution
{
public:

    /// Credit to @abdullayevakbar0101
    // https://leetcode.com/abdullayevakbar0101/
    int subsetXORSum(vector<int> &nums)
    {
        int all_or = 0;

        for (auto &&i : nums)
        {
            all_or |= i;
        }
        return all_or * (1 << (nums.size() - 1));
    }
};