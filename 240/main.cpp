/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 240.
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<vector<int>> M = {{0,1}, {2,4}};
    cout << s.searchMatrix(M,2) << '\n';
}