# https://leetcode.com/problems/path-with-maximum-gold


class Solution:

    def getMaximumGold(self, grid: List[List[int]]) -> int:

        def m(i, j):
            if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
                return 0

            if grid[i][j] == 0:
                return 0

            val = grid[i][j]
            grid[i][j] = 0

            result = val + max(m(i, j - 1), m(i, j + 1), m(i - 1, j),
                               m(i + 1, j))

            grid[i][j] = val

            return result

        maxGold = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]:
                    maxGold = max(maxGold, m(i, j))
        return maxGold
