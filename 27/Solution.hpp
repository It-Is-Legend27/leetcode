/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 27.
 * @version 0.1
 * @date 2023-03-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        auto found = find(nums.begin(), nums.end(), val);

        while(found != nums.end())
        {
            nums.erase(found);
            found = find(nums.begin(), nums.end(), val);
        }
        return nums.size();
    }
};