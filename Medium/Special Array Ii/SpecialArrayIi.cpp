// https://leetcode.com/problems/special-array-ii

class Solution {
public:
  vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries) {
    int prev = nums[0];
    nums[0] = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (!(nums[i] & 1) == !(prev & 1)) {
        prev = nums[i];
        nums[i] = nums[i - 1] + 1;
      } else {
        prev = nums[i];
        nums[i] = nums[i - 1];
      }
    }

    vector<bool> results(queries.size());
    for (int i = 0; i < queries.size(); i++) {
      results[i] = (nums[queries[i][1]] - nums[queries[i][0]]) == 0;
    }
    return results;
  }
};