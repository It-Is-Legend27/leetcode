/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 56.
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;

        for(auto&& interval : intervals){
            if(output.empty() || output.back()[1] < interval[0]){
                output.push_back(interval);
            }
            else{
                output.back()[1] = max(output.back()[1], interval[1]);
            }
        }
        return output;
    }
};