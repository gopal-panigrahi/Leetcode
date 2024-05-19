# https://leetcode.com/problems/plus-one


class Solution:

    def plusOne(self, digits: List[int]) -> List[int]:
        num = ''.join([str(i) for i in digits])
        num = int(num) + 1
        num = [int(i) for i in list(str(num))]
        return num
