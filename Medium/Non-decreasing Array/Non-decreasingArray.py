# https://leetcode.com/problems/non-decreasing-array


class Solution:

    def checkPossibility(self, arr: List[int]) -> bool:
        n = len(arr)
        count = 0
        pos = -1

        for i in range(n - 1):
            if arr[i] > arr[i + 1]:
                count += 1
                pos = i
                if count > 1:
                    return False

        if count == 0:
            return True

        if pos == 0 or pos == n - 2:
            return True

        if arr[pos - 1] <= arr[pos + 1] or arr[pos] <= arr[pos + 2]:
            return True

        return False
