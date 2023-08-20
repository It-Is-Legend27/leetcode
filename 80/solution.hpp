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

        int k = (nums.begin() != nums.end());
        auto it2 = nums.begin();

        for (auto it1 = nums.begin(); it1 != nums.end() - 1; ++it1)
        {
            int count = 0;
            while ((*it1) == (*it2) && it2 != nums.end() - 1)
            {
                if (count < 2)
                    ++count;
                it2++;
            }

            if (it2 < nums.end() && *it1 != *it2 && it1 != it2)
            {
                *(it1 + count) = *it2;
                k++;
            }
            else
            {
                it1 = nums.end() - 2;
            }

            it1 += count;
        }

        return k;
    }
};