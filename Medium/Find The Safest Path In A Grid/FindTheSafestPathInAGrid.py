# https://leetcode.com/problems/find-the-safest-path-in-a-grid


class Solution:

    def maximumSafenessFactor(self, grid: List[List[int]]) -> int:
        n = len(grid)
        p = list(range(n**2))

        def findSet(x):
            if p[x] != x:
                p[x] = findSet(p[x])

            return p[x]

        def unionSet(x, y):
            px = findSet(x)
            py = findSet(y)
            if px < py:
                p[px] = py
            elif py < px:
                p[py] = px

        thief = [[]]
        for i in range(n):
            for j in range(n):
                if grid[i][j]:
                    thief[0].append([i, j])
                    grid[i][j] = None

        while grid[0][0] is not None and grid[-1][-1] is not None:
            q1 = thief[-1]
            q2 = []
            thief.append(q2)

            for i, j in q1:
                for y1, x1 in [i + 1, j], [i - 1, j], [i, j + 1], [i, j - 1]:
                    if 0 <= y1 < n and 0 <= x1 < n and grid[y1][x1] is not None:
                        q2.append([y1, x1])
                        grid[y1][x1] = None

        q1 = thief.pop()
        for i, j in q1:
            grid[i][j] = 0

        for i in range(n):
            for j in range(n):
                if grid[i][j] is not None:
                    idx = i * n + j
                    if i + 1 < n and grid[i + 1][j] is not None:
                        unionSet(idx, idx + n)
                    if j + 1 < n and grid[i][j + 1] is not None:
                        unionSet(idx, idx + 1)

        if findSet(0) == n**2 - 1:
            return len(thief)

        while thief:
            q1 = thief.pop()
            for i, j in q1:
                grid[i][j] = 0
                idx = i * n + j
                for y1, x1 in [i + 1, j], [i - 1, j], [i, j + 1], [i, j - 1]:
                    if 0 <= y1 < n and 0 <= x1 < n and grid[y1][x1] is not None:
                        unionSet(idx, y1 * n + x1)
            if findSet(0) == n**2 - 1:
                break

        return len(thief)
