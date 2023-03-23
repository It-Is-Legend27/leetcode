#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 169.
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> counts;

        for (auto &&x : nums)
        {
            counts[x]++;
        }

        int highOccur = 0;

        for (auto &&x : counts)
        {
            if (x.second > nums.size()/2)
            {
                highOccur = x.first;
                return highOccur;
            }
        }
        return highOccur;
    }
};