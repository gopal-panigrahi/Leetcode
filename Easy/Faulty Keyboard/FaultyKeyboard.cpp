// https://leetcode.com/problems/faulty-keyboard

class Solution {
public:
  string finalString(string s) {
    string finalStr = "";
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'i') {
        reverse(finalStr.begin(), finalStr.end());
      } else {
        finalStr += s[i];
      }
    }
    return finalStr;
  }
};