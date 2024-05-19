// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
  int balancedStringSplit(string s) {
    int result = 0;
    int count = 0;
    for (char c : s) {
      if (c == 'R') {
        count += 1;
      } else if (c == 'L') {

        count -= 1;
      }
      if (count == 0) {
        result += 1;
      }
    }
    return result;
  }
};