// https://leetcode.com/problems/reverse-string

class Solution {
public:
  void reverseString(vector<char> &s) {
    int len = s.size();
    rev(s, 0, len - 1);
  }
  void rev(vector<char> &s, int start, int end) {
    if (start < end) {
      swap(s[start], s[end]);
      rev(s, ++start, --end);
    }
  }
};