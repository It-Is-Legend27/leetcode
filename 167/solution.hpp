#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for(auto it = nums.begin(); it != nums.end(); ++it)
        {
            int diff = target - *it;

            if(binary_search(it, nums.end(), diff))
            {
                int i = it - nums.begin();
                int j = lower_bound(it+1, nums.end(), diff) - nums.begin();
                return {i+1,j+1};
            }
        }
        
        return {-1, -1};
    }
};