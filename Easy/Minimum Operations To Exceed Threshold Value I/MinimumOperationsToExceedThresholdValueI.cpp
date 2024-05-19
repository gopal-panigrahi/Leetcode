// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i

class Solution {
public:
  int minOperations(vector<int> &nums, int k) {
    int count = 0;
    for (int n : nums) {
      if (n < k) {
        count++;
      }
    }
    return count;
  }
};