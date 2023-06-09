/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 2.
 * @version 0.1
 * @date 2023-03-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode(); // dummy node for start of result list
        ListNode *temp = result; // Pointer for traversing and appending to list
        int carry = 0;

        // Loop while the lists are not empty 
        // and a carry exists
        while (l1 || l2 || carry)
        {
            int sum = 0;

            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum+= carry;
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        // Get rid of empty node at the start
        ListNode *dispose = result;
        result = result->next;
        delete dispose;

        return result;
    }
};