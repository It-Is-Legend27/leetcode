/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 74.
 * @version 0.1
 * @date 2023-04-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        unsigned firstColSz = matrix.size(), targetRowSz = matrix[0].size();
        vector<int> firstCol(firstColSz);

        vector<int>::iterator colIt = firstCol.begin();
        vector<int>::iterator colEnd = firstCol.end();
        vector<vector<int>>::iterator mIt = matrix.begin();

        while (colIt != colEnd)
        {
            *colIt = mIt->front();

            ++colIt;
            ++mIt;
        }

        int row = upper_bound(firstCol.begin(), firstCol.end(), target) - firstCol.begin() - 1;
        if (row < 0)
            return false;

        return binary_search(matrix[row].begin(), matrix[row].end(), target);
    }
};