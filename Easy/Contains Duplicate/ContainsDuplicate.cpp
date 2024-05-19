// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    if (nums.empty()) {
      return false;
    }
    if (nums.empty()) {
      return false;
    }
    sort(nums.begin(), nums.end());
    for (int i = 1; i < int(nums.size()); i++) {
      if (nums[i] == nums[i - 1]) {
        return true;
      }
    }
    return false;
  }
};