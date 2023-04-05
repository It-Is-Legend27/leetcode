/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 237.
 * @version 0.1
 * @date 2023-04-05
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
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    s.deleteNode(head);
    cout << head->val << '\n';
}