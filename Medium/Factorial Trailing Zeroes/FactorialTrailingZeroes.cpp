// https://leetcode.com/problems/factorial-trailing-zeroes

class Solution {
public:
  int trailingZeroes(int n) {
    long i = 5, zeroes = 0;
    while (i <= n) {
      zeroes += n / i;
      i *= 5;
    }
    return zeroes;
  }
};