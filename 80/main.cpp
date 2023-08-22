#include "solution.hpp"
using namespace std;
int main()
{
    vector<int> nums = {1,1,2,2,3};

    Solution s;

    cout << s.removeDuplicates(nums) << endl;

    for (auto &&i : nums)
    {
        cout << i << ' ';
    }
    
}