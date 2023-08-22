#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        auto l = nums.begin(), r = nums.begin(), n = nums.end();

        while(r != n)
        {
            int count = 1;

            while(r + 1 != n && *r == *(r+1))
            {
                ++r;
                ++count;
            }

            for(int i = 0; i < min(2,count); ++i)
            {
                *l = *r;
                ++l;
            }

            ++r;
        }

        return l - nums.begin();
    }
};