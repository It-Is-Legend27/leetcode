#include <iostream>
#include <vector>
#include "Solution.hpp"
using namespace std;

int main()
{
    Solution s;
    vector<int> A = {1,1,1,1,1,2,3,4,5,1};
    s.removeElement(A, 1);

    for(auto x: A)
    {
        cout << x << ' ';
    }
    cout << '\n';
}