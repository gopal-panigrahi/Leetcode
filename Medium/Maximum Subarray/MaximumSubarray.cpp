// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int max_ele = nums[0], cur = 0;
    for (int num : nums) {
      cur = max(num, cur + num);
      if (cur > max_ele) {
        max_ele = cur;
      }
    }
    return max_ele;
  }
};