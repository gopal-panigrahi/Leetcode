// https://leetcode.com/problems/count-asterisks

class Solution {
public:
  int countAsterisks(string s) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int sep = 0, count = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '|') {
        sep++;
      }
      if (!(sep & 1) && s[i] == '*') {
        count++;
      }
    }
    return count;
  }
};