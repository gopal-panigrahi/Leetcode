// https://leetcode.com/problems/truncate-sentence

class Solution {
public:
  string truncateSentence(string s, int k) {
    string result;
    int count = 0;
    for (char c : s) {
      if (c == ' ') {
        count++;
      }
      if (count == k) {
        break;
      }
      result += c;
    }
    return result;
  }
};