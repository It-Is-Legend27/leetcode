/**
 * @file main.cpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 138.
 * @version 0.1
 * @date 2023-03-22
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head->random = head->next;

    Node* cpy = s.copyRandomList(head);

    cout << cpy->random->val << ' ';
}