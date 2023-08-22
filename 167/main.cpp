#include "solution.hpp"
using namespace std;

int main()
{
    vector<int> nums = {2,7,11,15};
    vector<int> res = Solution().twoSum(nums, 9);
    
    for (auto &&x : res)
    {
        cout << x << ' ';
    }
    
}
