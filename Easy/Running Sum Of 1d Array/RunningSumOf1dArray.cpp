// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    if (nums.empty()) {
      return vector<int>();
    }
    vector<int> result(nums.size());
    partial_sum(nums.begin(), nums.end(), result.begin());
    return result;
  }
};