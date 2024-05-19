# https://leetcode.com/problems/roman-to-integer


class Solution:

    def romanToInt(self, s: str) -> int:
        roman = {
            "": 2000,
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        sum = 0
        prev = ""
        for c in s:
            val = roman[c]
            if roman[c] > roman[prev]:
                val -= 2 * roman[prev]
            sum += val
            prev = c
        return sum
