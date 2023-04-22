/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 229.
/// ##### version 0.1
/// ##### 2023-04-22
/// ##### Copyright (c) 2023

class Solution {
  List<int> majorityElement(List<int> nums) {
    Map<int, int> counts = {};
    List<int> result = [];
    int n = (nums.length / 3).floor();

    for (int element in nums) {
      counts.update(
        element,
        (value) => value + 1,
        ifAbsent: () => 1,
      );
    }
    counts.forEach((key, value) {
      if (n < value) result.add(key);
    });
    return result;
  }
}
