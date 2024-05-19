// https://leetcode.com/problems/decompress-run-length-encoded-list

class Solution {
public:
  vector<int> decompressRLElist(vector<int> &nums) {
    int lastElement = (nums.size() - 1) / 2;
    vector<int> result;
    for (int i = 0; i <= lastElement; i++) {
      for (int j = 0; j < nums[2 * i]; j++) {
        result.push_back(nums[2 * i + 1]);
      }
    }
    return result;
  }
};