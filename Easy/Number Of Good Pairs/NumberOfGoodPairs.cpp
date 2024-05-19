// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
  int numIdenticalPairs(vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }
    int count = 0;
    for (int i = 0; i < int(nums.size()); i++) {
      for (int j = i + 1; j < int(nums.size()); j++) {
        count += (nums[i] == nums[j]);
      }
    }
    return count;
  }
};