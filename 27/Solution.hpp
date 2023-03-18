#pragma once
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        auto found = find(nums.begin(), nums.end(), val);

        while(found != nums.end())
        {
            nums.erase(found);
            found = find(nums.begin(), nums.end(), val);
        }
        return nums.size();
    }
};