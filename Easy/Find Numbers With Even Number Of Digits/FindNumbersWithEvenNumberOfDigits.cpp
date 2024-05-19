// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution {
public:
  int findNumbers(vector<int> &nums) {
    int count = 0;
    for (int num : nums) {
      int power10 = (int)log10(num);
      if (power10 & 1 == 1) {
        count++;
      }
    }
    return count;
  }
};