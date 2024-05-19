// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
  vector<int> ways;
  int climbStairs(int n) {
    ways.assign(n + 1, 0);
    ways[0] = 1;
    return countWays(n);
  }
  int countWays(int n) {
    if (n < 0) {
      return 0;
    }
    if (ways[n] == 0) {
      ways[n] = countWays(n - 1) + countWays(n - 2);
    }
    return ways[n];
  }
};