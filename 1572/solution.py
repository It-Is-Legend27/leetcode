'''
file: solution.py
author: Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
brief: Solution to LeetCode Problem 1572.
version: 0.1
date: 2023-04-20
copyright: Copyright (c) 2023
'''
class Solution:
    def diagonalSum(self, mat: list[list[int]]) -> int:
        sum: int = 0
        n: int = len(mat)
        for i in range(0,n):
            sum += mat[i][i]
            if (i,i) != (i,n-1-i):
                sum += mat[i][n-1-i]
        return sum
    
if __name__ == "__main__":
    print(Solution().diagonalSum([[1,2,3],[4,5,6],[7,8,9]]))