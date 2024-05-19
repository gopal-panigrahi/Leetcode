// https://leetcode.com/problems/single-number

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int remain = 0;
    for (int num : nums) {
      remain ^= num;
    }
    return remain;
  }
};