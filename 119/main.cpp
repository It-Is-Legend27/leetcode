#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> A = s.getRow(3);

    for (auto &&i : A)
    {
        cout << i << ' ';
    }
    cout << '\n';
    
    return 0;
}