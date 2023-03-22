#pragma once
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> row;

        for (size_t i = 0; i < rowIndex+1; i++)
        {
            row.push_back(1);
        }

        for (size_t i = 1; i < rowIndex/2+1; i++)
        {
            row[i] = row[i-1] * (rowIndex - i + 1)/i;
            row[rowIndex - i] = row[i];
        }
        
        return row;
    }
};