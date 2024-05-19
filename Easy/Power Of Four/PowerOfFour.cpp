// https://leetcode.com/problems/power-of-four

class Solution {
public:
  bool isPowerOfFour(int num) {
    if (num <= 0) {
      return false;
    }
    float pow = log(num) / log(4);
    return (pow - long(pow)) == 0.00;
  }
};