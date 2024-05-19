# https://leetcode.com/problems/valid-palindrome


class Solution:

    def isPalindrome(self, s: str) -> bool:
        ns = ""
        for c in s.lower():
            if c.isalnum():
                ns += c
        rs = ns[::-1]
        return rs == ns
