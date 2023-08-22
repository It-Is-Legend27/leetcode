class Solution:
    def formatString(self, s:str) -> str:
        res = ""

        for c in s:
            c = c.lower()
            if c.isalnum():
                res += c
        return res

    def isPalindrome(self, s: str) -> bool:
        s = self.formatString(s)
        print(s)
        l,r = 0, len(s)-1

        while l <= r:
            if s[l] != s[r]:
                return False
            l += 1
            r -= 1
        return True