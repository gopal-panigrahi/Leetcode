// https://leetcode.com/problems/lexicographically-smallest-palindrome

class Solution {
public:
  string makeSmallestPalindrome(string s) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int l = 0, h = s.size() - 1;
    while (l < h) {
      if (s[l] < s[h]) {
        s[h] = s[l];
      } else {
        s[l] = s[h];
      }
      l++;
      h--;
    }
    return s;
  }
};