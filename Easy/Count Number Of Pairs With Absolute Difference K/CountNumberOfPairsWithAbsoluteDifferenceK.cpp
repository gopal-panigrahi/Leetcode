// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k

class Solution {
public:
  int countKDifference(vector<int> &nums, int k) {
    int size = nums.size();
    int pairCount = 0;
    for (int i = 1; i < nums.size(); i++) {
      for (int j = 0; j < i; j++) {
        pairCount += abs(nums[i] - nums[j]) == k;
      }
    }
    return pairCount;
  }
};