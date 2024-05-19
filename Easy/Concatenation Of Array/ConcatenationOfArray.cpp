// https://leetcode.com/problems/concatenation-of-array

class Solution {
public:
  vector<int> getConcatenation(vector<int> &nums) {
    int size = nums.size();
    vector<int> result(size * 2, 0);
    for (int i = 0; i < size; i++) {
      result[i] = result[i + size] = nums[i];
    }
    return result;
  }
};