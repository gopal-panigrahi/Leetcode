// https://leetcode.com/problems/bulb-switcher

class Solution {
public:
  int bulbSwitch(int n) {
    if (n == 0) {
      return 0;
    }
    int count = 1;
    for (int i = 2; i <= n; i++) {
      int root = sqrt(i);
      if (root * root == i) {
        count++;
      }
    }
    return count;
  }
};