// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative

class Solution {
public:
  int findMaxK(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int start = 0, end = nums.size() - 1;
    int result = -1;
    while (start < end) {
      int sum = nums[start] + nums[end];
      if (sum == 0) {
        result = nums[end];
        break;
      } else if (sum < 0) {
        start++;
      } else {
        end--;
      }
    }
    return result;
  }
};