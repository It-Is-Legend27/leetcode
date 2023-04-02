'''
file: solution.py
author: Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
brief: Solution to LeetCode Problem 50.
version: 0.1
date: 2023-03-21
copyright: Copyright (c) 2023
'''
class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        result: list[int] = []
        temp: int = 0

        # list of digits to int
        for i in range(0, len(digits)):
            temp = 10*temp +digits[i]

        temp += 1

        # int to list of digits
        while temp != 0:
            result.insert(0,temp%10)
            temp -= temp%10
            temp //=10
        return result
