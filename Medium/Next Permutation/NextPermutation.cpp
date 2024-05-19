// https://leetcode.com/problems/next-permutation

class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int size = nums.size();
    int breakpoint = -1;
    for (int i = size - 1; i > 0; i--) {
      if (nums[i - 1] < nums[i]) {
        breakpoint = i - 1;
        break;
      }
    }
    if (breakpoint == -1) {
      reverse(nums.begin(), nums.end());
    } else {
      int min_num = -1;
      for (int i = size - 1; i > breakpoint; i--) {
        if (nums[i] > nums[breakpoint]) {
          min_num = i;
          break;
        }
      }
      swap(nums[min_num], nums[breakpoint]);
      reverse(nums.begin() + breakpoint + 1, nums.end());
    }
  }
};