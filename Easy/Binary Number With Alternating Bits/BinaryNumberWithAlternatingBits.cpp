// https://leetcode.com/problems/binary-number-with-alternating-bits

class Solution {
public:
  bool hasAlternatingBits(int x) {
    long n = x;
    if ((n & (n << 1)) != 0) {
      return false;
    }
    if ((n & (n << 2)) == (n & (~3))) {
      return true;
    } else {
      return false;
    }
  }
};