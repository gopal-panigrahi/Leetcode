// https://leetcode.com/problems/hamming-distance

class Solution {
public:
  int hammingDistance(int x, int y) {
    int distance = x ^ y;
    return __builtin_popcount(distance);
  }
};