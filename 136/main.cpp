/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 136.
 * @version 0.1
 * @date 2023-03-21
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
    vector<int> A = {1,1,2,3,3};
    int val = s.singleNumber(A);
    cout << val << '\n';
}