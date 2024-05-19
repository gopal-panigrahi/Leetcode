// https://leetcode.com/problems/sum-of-all-subset-xor-totals

class Solution {
public:
  int subsetXORSum(vector<int> &nums) {
    const int size = nums.size();
    long long upper_limit = 1 << size;
    long xor_sum = 0;
    for (long long i = 0; i < upper_limit; i++) {
      long xor_value = 0;
      for (int j = 0; j < size; j++) {
        if (i & 1 << j) {
          xor_value ^= nums[j];
        }
      }
      xor_sum += xor_value;
    }
    return xor_sum;
  }
};