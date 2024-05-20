# https://leetcode.com/problems/find-the-maximum-sum-of-node-values/


class Solution:
    def maximumValueSum(self, nums: List[int], k: int, edges: List[List[int]]) -> int:
        n = len(nums)
        xordiff = [0] * n
        for i in range(n):
            xordiff[i] = (nums[i] ^ k) - nums[i]
        xordiff.sort()
        sum_max = sum(nums)
        for i in range(n - 1, 0, -2):
            if (xordiff[i] + xordiff[i - 1]) < 0:
                return sum_max
            sum_max += xordiff[i] + xordiff[i - 1]
        return sum_max
