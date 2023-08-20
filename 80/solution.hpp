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

        for (auto it1 = nums.begin(); it1 < nums.end() - 1; ++it1)
        {
            int count = 0;
            while ((*it1) == (*it2) && it2 != nums.end() - 1)
            {
                count++;
                it2++;

                cout << "count "<< count << endl;
            }

            if (it2 < nums.end() && *it1 != *it2 && it1 != it2)
            {
                if(count <= 2){
                *(it1 + count) = *it2;
                it1+= count-1;
                k+= count;
                }
                else{
                *(it1 + 2) = *it2;
                it1+=1;
                k+=2;
                }
            }
            else
            {
                it1 = nums.end() - 2;
            }

            for(auto i: nums)
            {
                cout << i << ' ';
            }
            cout << endl;
        }

        return k+1;
    }
};