#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> A = {0,1};
    s.sortColors(A);
    for (auto &&i : A)
    {
        cout << i << ' ';
    }

    cout << '\n';
}