#pragma once
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string fwd = to_string(x);
        string bwkd = fwd;
        reverse(bwkd.begin(), bwkd.end());
        return fwd == bwkd;
    }
};