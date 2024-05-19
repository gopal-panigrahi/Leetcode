// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
public:
  int numberOfSteps(int num) {
    int count = 0;
    while (num) {
      count++;
      if (num & 1) {
        num ^= 1;
      } else {
        num >>= 1;
      }
    }
    return count;
  }
};