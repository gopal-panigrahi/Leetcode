// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int i = nums1.size() - 1, j = m - 1, k = n - 1; i >= 0; i--) {
      if (k < 0) {
        nums1[i] = nums1[j--];
      } else if (j < 0) {
        nums1[i] = nums2[k--];
      } else if (nums1[j] > nums2[k]) {
        nums1[i] = nums1[j--];
      } else {
        nums1[i] = nums2[k--];
      }
    }
  }
};