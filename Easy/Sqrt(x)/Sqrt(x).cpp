// https://leetcode.com/problems/sqrtx

class Solution {
public:
  int mySqrt(int x) {
    long num = x >> 1;
    while (num * num > x) {
      num >>= 1;
    }
    while (num * num <= x) {
      num++;
    }
    return num - 1;
  }
};