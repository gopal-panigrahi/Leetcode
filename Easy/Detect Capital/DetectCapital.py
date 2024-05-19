# https://leetcode.com/problems/detect-capital


class Solution:

    def detectCapitalUse(self, word: str) -> bool:
        return (word == word.upper()) or (word
                                          == word.lower()) or (word
                                                               == word.title())
