// https://leetcode.com/problems/to-lower-case

class Solution {
public:
  string toLowerCase(string s) {
    int diff = 'a' - 'A';
    string result = "";
    for (char c : s) {
      result += tolower(c);
    }
    return result;
  }
};