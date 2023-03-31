#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 169.
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool isFound = 0;
        for (auto &&row : matrix)
        {
            isFound = binary_search(row.begin(), row.end(), target);

            if(isFound)
            return true;
        }
        
        return false;
    }
};