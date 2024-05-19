// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int size = nums.size();
    int maxLeft = numeric_limits<int>::min();
    int maxRight = numeric_limits<int>::min();
    int currentLeft = 1;
    int currentRight = 1;
    for (int i = 0; i < size; i++) {
      currentLeft *= nums[i];
      currentRight *= nums[size - i - 1];
      maxLeft = max(currentLeft, maxLeft);
      maxRight = max(currentRight, maxRight);
      if (currentLeft == 0) {
        currentLeft = 1;
      }
      if (currentRight == 0) {
        currentRight = 1;
      }
    }
    return max(maxRight, maxLeft);
  }
};