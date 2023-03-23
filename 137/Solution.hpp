/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 137.
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> counts;

        for (auto &&x : nums)
        {
            counts[x]++;
        }
        
        int lowOccur;

        for(auto &&x: counts)
        {
            if(x.second == 1)
            {
                lowOccur = x.first;
                return lowOccur;
            }
        }
        return lowOccur;
    }
};