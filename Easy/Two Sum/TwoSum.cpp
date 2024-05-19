// https://leetcode.com/problems/two-sum

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    if (nums.empty()) {
      return vector<int>();
    }
    unordered_map<int, int> ft;
    int x, y;
    for (int i = 0; i < int(nums.size()); i++) {
      if (ft[target - nums[i]]) {
        x = i;
        y = ft[target - nums[i]] - 1;
        break;
      } else {
        ft[nums[i]] = i + 1;
      }
    }
    return vector<int>({y, x});
  }
};