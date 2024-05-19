// https://leetcode.com/problems/is-subsequence

class Solution {
public:
  bool isSubsequence(string s, string t) {
    for (int i = 0, j = 0; s[i]; i++) {
      while (t[j] != s[i] && t[j]) {
        j++;
      }
      if (t[j] == s[i]) {
        j++;
      } else {
        return false;
      }
    }
    return true;
  }
};