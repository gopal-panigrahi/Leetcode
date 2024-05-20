// https://leetcode.com/problems/sort-colors

class Solution {
public:
  void sortColors(vector<int> &nums) {
    int size = nums.size();
    int start = 0, mid = 0, end = size - 1;
    while (mid <= end) {
      if (nums[mid] == 0) {
        swap(nums[start], nums[mid]);
        start++;
        mid++;
      } else if (nums[mid] == 1) {
        mid++;
      } else {
        swap(nums[mid], nums[end]);
        end--;
      }
    }
  }
};