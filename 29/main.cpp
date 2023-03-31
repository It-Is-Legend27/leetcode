/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 29.
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    cout << s.divide(numeric_limits<int>::max(), -10000) << '\n';
}