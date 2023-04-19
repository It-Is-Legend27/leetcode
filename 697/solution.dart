import 'dart:math';

/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 2390.
/// ##### version 0.1
/// ##### 2023-04-09
/// ##### Copyright (c) 2023

/// Credit to @rashmantri, used his solution.
/// https://leetcode.com/rashmantri/
class Solution {
    int findShortestSubArray(List<int> nums) {
        Map<int, int> left = {},
            right = {}, count = {};

        for (int i = 0; i < nums.length; i++) {
            int x = nums[i];
            if (!left.containsKey(x)) 
            left[x] = i;

            right[x] = i;
            
            if(!count.containsKey(x))
            count[x] = 0 + 1;
            else
            count[x] = count[x]! + 1;
        }

        int ans = nums.length;
        int degree = count.values.reduce(min);
        for (int x in count.keys) {
            if (count[x]! == degree) {
                ans = min(ans, right[x]! - left[x]! + 1);
            }
        }
        return ans+1;
    }
}