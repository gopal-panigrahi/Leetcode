// https://leetcode.com/problems/number-complement

class Solution {
public:
  int findComplement(int num) {
    int msb1 = log2(num);
    return (~num) & ((1 << msb1) - 1);
  }
};