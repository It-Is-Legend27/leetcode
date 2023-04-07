#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 237.
 * @version 0.1
 * @date 2023-04-05
 *
 * @copyright Copyright (c) 2023
 *
 */
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // Keep track of next node
        ListNode* temp = node->next;
        // Change "garbage" node value to next node
        node->val = temp->val;

        // Link "garbage" node node after the next in list
        node->next = temp->next;

        // Delete the original "next" node
        delete temp;
    }
};