# https://leetcode.com/problems/best-time-to-buy-and-sell-stock


class Solution:

    def maxProfit(self, prices: List[int]) -> int:
        minArray = [prices[0]]
        maxProfit = 0
        for p in prices:
            minArray.append(min(p, minArray[-1]))
        for (i, p) in enumerate(prices[1:]):
            maxProfit = max(p - minArray[i + 1], maxProfit)
        return maxProfit
