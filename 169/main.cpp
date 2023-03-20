#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> A = {2,2,1,1,1,2,2};
    cout << s.majorityElement(A) << '\n';
}