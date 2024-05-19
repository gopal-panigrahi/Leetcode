// https://leetcode.com/problems/house-robber

class Solution {
public:
  vector<int> maxRobarray;
  int rob(vector<int> &nums) {
    if (nums.size() == 0) {
      return 0;
    }
    maxRobarray.assign(nums.size(), -1);
    maxRobarray[0] = nums[0];
    return maxRob(nums.size() - 1, nums);
  }
  int maxRob(int n, vector<int> &nums) {
    if (n < 0) {
      return 0;
    }
    if (maxRobarray[n] == -1) {
      maxRobarray[n] = max(nums[n] + maxRob(n - 2, nums), maxRob(n - 1, nums));
    }
    return maxRobarray[n];
  }
};