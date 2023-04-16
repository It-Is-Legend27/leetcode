/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 455.
/// ##### version 0.1
/// ##### 2023-04-16
/// ##### Copyright (c) 2023 

class Solution {
  int findContentChildren(List<int> greedFactors, List<int> sizes) {
    int numContent = 0;
    greedFactors.sort();
    sizes.sort();

    for (int i = 0, j = 0; i < greedFactors.length && j < sizes.length;) 
    {
      if(sizes[j] >= greedFactors[i])
      {
        numContent++; i++; j++;
      }
      else j++;
    }
    return numContent;
  }
}