// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k

class Solution {
public:
  int minOperations(vector<int> &nums, int k) {
    int xorTotal = k;
    for (int i = 0; i < nums.size(); i++) {
      xorTotal ^= nums[i];
    }

    return __builtin_popcount(xorTotal);
  }
};