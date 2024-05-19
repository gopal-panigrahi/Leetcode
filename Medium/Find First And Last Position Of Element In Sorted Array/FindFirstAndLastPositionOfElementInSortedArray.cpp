// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> limits{-1, -1};
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == target) {
        limits[0] = limits[0] == -1 ? i : limits[0];
        limits[1] = max(limits[1], i);
      }
    }
    return limits;
  }
};