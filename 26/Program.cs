using System;
using System.Collections.Generic;

int RemoveDuplicates(ref int[] nums)
{
    SortedSet<int> unique = new();
    
    foreach (int item in nums)
    {
        unique.Add(item);
    }

    int i = 0;
    foreach (int item in unique)
    {
        nums[i] = item;
        i++;
    }
    return unique.Count;
}

int[] nums = {5,3,4,2,1,5,5,5,5,5,5};
int count = RemoveDuplicates(ref nums);

foreach (int item in nums)
{
    Console.WriteLine(item);
}
Console.WriteLine(count);