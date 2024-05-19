// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits

class Solution {
public:
  int sumIndicesWithKSetBits(vector<int> &nums, int k) {
    int size = nums.size();
    vector<int> prefixBitArray(size);
    int sum = 0;
    for (int i = 0; i < size; i++) {
      prefixBitArray[i] = prefixBitArray[i >> 1] + (i & 1);
      if (prefixBitArray[i] == k) {
        sum += nums[i];
      }
    }
    return sum;
  }
};