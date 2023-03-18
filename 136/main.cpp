#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> A = {1,1,2,3,3};
    int val = s.singleNumber(A);
    cout << val << '\n';
}