#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> counts;

        for (auto &&x : nums)
        {
            counts[x]++;
        }

        int highOccur = 0;

        for (auto &&x : counts)
        {
            if (x.second > nums.size()/2)
            {
                highOccur = x.first;
                return highOccur;
            }
        }
        return highOccur;
    }
};