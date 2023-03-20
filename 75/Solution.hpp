#pragma once
#include <vector>
using namespace std;

enum Colors{RED,WHITE,BLUE};

class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int redCount = 0, whiteCount = 0, blueCount = 0;
        for (auto &&x : arr)
        {
            redCount += (x == RED);
            whiteCount += (x == WHITE);
            blueCount += (x == BLUE);
        }
        arr.clear();
        arr.resize(redCount, RED);
        arr.resize(redCount + whiteCount, WHITE);
        arr.resize(redCount + whiteCount + blueCount, BLUE);
    }
};
