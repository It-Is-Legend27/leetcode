/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 1863.
/// ##### version 0.1
/// ##### 2023-04-09
/// ##### Copyright (c) 2023 

class Solution {
  /// Credit to @abdullayevakbar0101
    // https://leetcode.com/abdullayevakbar0101/
  int subsetXORSum(List<int> nums)
    {
        int all_or = 0;

        for (int element in nums)
        {
            all_or |= element;
        }
        return all_or * (1 << (nums.length - 1));
    }
}