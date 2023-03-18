#include <iostream>
#include "Solution.hpp"
using namespace std;


int main()
{
    ListNode* head = new ListNode(1);
    ListNode* head2 = new ListNode(9);
    head->next = new ListNode(0);
    head->next = new ListNode(9);

    Solution s;
    ListNode* res = s.addTwoNumbers(head, head2);

    cout << res->val << ' ' << res->next->val << ' ' << res->next->next->val << '\n';
    return 0;
}