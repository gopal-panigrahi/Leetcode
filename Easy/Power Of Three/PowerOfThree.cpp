// https://leetcode.com/problems/power-of-three

class Solution {
public:
  bool isPowerOfThree(int n) {
    long res = 1;
    while (res < n) {
      res *= 3;
    }
    return res == n;
  }
};