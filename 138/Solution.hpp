/**
 * @file Solution.hpp
 * @author Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
 * @brief Solution to LeetCode Problem 138.
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        // If empty list, return nullptr
        if (!head)
            return nullptr;

        // Deep copy of first node
        Node *deepCpy = new Node(head->val);
        Node *trav = deepCpy;
        Node *ogTrav = head;

        ogTrav = ogTrav->next;

        // Deep copy linked list, excluding random pointers
        while (ogTrav)
        {
            trav->next = new Node(ogTrav->val);
            ogTrav = ogTrav->next;
            trav = trav->next;
        }

        ogTrav = head;
        trav = deepCpy;

        // Traverse through each node in list
        while (ogTrav)
        {
            // Start temp pointers at head of lists
            Node *ogTemp = head;
            Node *temp = deepCpy;

            // Find temp node that random pointer points to
            while (ogTemp)
            {
                // If random pointer points current node, update deep copy
                if (ogTrav->random == ogTemp)
                {
                    trav->random = temp;
                    break;
                }

                // Traverse to next node to test further
                ogTemp = ogTemp->next;
                temp = temp->next;
            }

            ogTrav = ogTrav->next;
            trav = trav->next;
        }

        return deepCpy;
    }
};