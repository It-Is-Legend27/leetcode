#pragma once
/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 234.
 * @version 0.1
 * @date 2023-04-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <string>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        // If empty, not palindrome (for this problem)
        if(!head)
        return false;

        ListNode* travel = head;
        string fwd;
        string bwkd;

        while(travel)
        {
            fwd += to_string(travel->val);
            travel = travel->next;
        }
        bwkd = fwd;
        reverse(bwkd.begin(), bwkd.end());
        return (fwd == bwkd);
    }
};