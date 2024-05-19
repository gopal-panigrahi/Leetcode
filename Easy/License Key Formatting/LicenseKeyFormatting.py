# https://leetcode.com/problems/license-key-formatting


class Solution:

    def licenseKeyFormatting(self, s: str, k: int) -> str:
        strippedString = s.replace("-", "").upper()
        result = []
        for i in range(len(strippedString), 0, -k):
            result.append(strippedString[max(i - k, 0):i])
        result.reverse()
        return "-".join(result)
