// https://leetcode.com/problems/maximum-odd-binary-number

class Solution {
public:
  string maximumOddBinaryNumber(string s) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int ones = -1, zeroes = 0, l = s.length();
    for (int i = 0; i < l; i++) {
      s[i] == '0' ? zeroes++ : ones++;
    }
    for (int i = 0; i < l; i++) {
      if (ones) {
        ones--;
        s[i] = '1';
      } else {
        s[i] = '0';
      }
    }
    s[l - 1] = '1';
    return s;
  }
};