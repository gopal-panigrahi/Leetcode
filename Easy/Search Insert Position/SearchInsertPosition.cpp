// https://leetcode.com/problems/search-insert-position

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1, mid, lowerBound = nums.size();
    while (low <= high) {
      mid = (high + low) / 2;
      if (target <= nums[mid]) {
        lowerBound = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return lowerBound;
  }
};