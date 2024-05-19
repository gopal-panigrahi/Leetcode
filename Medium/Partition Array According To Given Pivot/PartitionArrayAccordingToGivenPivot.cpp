// https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
  vector<int> pivotArray(vector<int> &nums, int pivot) {
    int left = 0, mid = 0, right = nums.size();
    vector<int> result(nums.size());
    for (int num : nums) {
      if (num < pivot) {
        mid++;
      } else if (num > pivot) {
        right--;
      }
    }

    for (int num : nums) {
      if (num < pivot) {
        result[left++] = num;
      } else if (num > pivot) {
        result[right++] = num;
      } else {
        result[mid++] = num;
      }
    }

    return result;
  }
};