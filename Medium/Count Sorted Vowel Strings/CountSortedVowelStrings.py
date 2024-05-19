# https://leetcode.com/problems/count-sorted-vowel-strings


class Solution:

    def countVowelStrings(self, n: int) -> int:
        vowelstring = 0
        for i in ['a', 'e', 'i', 'o', 'u']:
            vowelstring += self.vowelStringfunc(i, 1, n, {})
        return vowelstring

    def vowelStringfunc(self, char, curdepth, maxdepth, alltree) -> int:
        if curdepth == maxdepth:
            return 1
        if alltree.get(char + str(curdepth), -1) != -1:
            return alltree[char + str(curdepth)]
        total = 0
        for i in ['a', 'e', 'i', 'o', 'u']:
            if i < char:
                continue
            total += self.vowelStringfunc(i, curdepth + 1, maxdepth, alltree)
        alltree[char + str(curdepth)] = total
        return alltree[char + str(curdepth)]
