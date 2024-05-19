// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
  string reverseWords(string s) {
    int pos = s.find(' ', 0);
    int prevpos = 0;
    while (pos != string::npos) {
      reverse(s.begin() + prevpos, s.begin() + pos);
      prevpos = pos + 1;
      pos = s.find(' ', prevpos);
    }
    reverse(s.begin() + prevpos, s.end());
    return s;
  }
};