#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 704.
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int middle;

        while (right - left > 1)
        {
            int middle = (right + left) / 2;
            if (nums[middle] < target)
                left = middle + 1;
            else
                right = middle;
        }

        if (nums[left] == target)
            return left;
        else if(nums[right] == target)
            return right;

        return -1;
    }
};