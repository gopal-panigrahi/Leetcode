// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int index = 0, last_element = -1;

    while (index < int(nums.size())) {
      nums[++last_element] = nums[index];
      index = (lower_bound(nums.begin(), nums.end(), nums[index] + 1)) -
              nums.begin();
    }
    return last_element + 1;
  }
};