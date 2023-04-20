/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 1.
 * @version 0.1
 * @date 2023-04-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

// Credit to amoddeshmukh844
// https://leetcode.com/amoddeshmukh844/
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> visited;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            int n = nums[i];
            int complement = target - n;
            if (visited.count(complement)) {
                return {visited[complement], i};
            }
            visited[n] = i;
        }
        return vector<int>();
    }
}; 