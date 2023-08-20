#include "solution.hpp"
using namespace std;
int main()
{
    vector<int> nums = {1,1,2,2,3};

    Solution s;

    s.removeDuplicates(nums);

    for (auto &&i : nums)
    {
        cout << i << ' ';
    }
    
}