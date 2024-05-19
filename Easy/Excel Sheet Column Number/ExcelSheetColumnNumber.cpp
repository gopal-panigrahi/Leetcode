// https://leetcode.com/problems/excel-sheet-column-number

class Solution {
public:
  int titleToNumber(string s) {
    long pow = 1, sum = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
      sum += (s[i] - 'A' + 1) * pow;
      pow *= 26;
    }
    return sum;
  }
};