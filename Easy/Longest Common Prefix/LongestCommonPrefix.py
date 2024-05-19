# https://leetcode.com/problems/longest-common-prefix


class Solution:

    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        l = 10000000
        small_s = ""
        for s in strs:
            if (len(s) < l):
                l = len(s)
                small_s = s
        for i in range(l):
            c = strs[0][i]
            for s in strs:
                if (c != s[i]):
                    return s[:i]
        return small_s
