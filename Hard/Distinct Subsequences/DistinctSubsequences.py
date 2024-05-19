# https://leetcode.com/problems/distinct-subsequences


class Solution:

    def numDistinct(self, s: str, t: str) -> int:
        dp = {}

        def matches(s: str, t: str, i: int, j: int):
            if j == len(t):
                return 1
            if i == len(s):
                return 0

            if len(s) - i < len(t) - j:
                return 0

            if (i, j) in dp:
                return dp[(i, j)]

            if s[i] == t[j]:
                dp[(i, j)] = matches(s, t, i + 1, j + 1) + matches(
                    s, t, i + 1, j)
            else:
                dp[(i, j)] = matches(s, t, i + 1, j)

            return dp[(i, j)]

        return matches(s, t, 0, 0)
