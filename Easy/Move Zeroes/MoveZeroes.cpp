// https://leetcode.com/problems/move-zeroes

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    if (nums.empty()) {
      return;
    }
    int j = 0, i = 0, n = nums.size();
    for (; i < n; i++) {
      if (nums[i] != 0) {
        nums[j++] = nums[i];
      }
    }
    for (; j < n; j++) {
      nums[j] = 0;
    }
  }
};