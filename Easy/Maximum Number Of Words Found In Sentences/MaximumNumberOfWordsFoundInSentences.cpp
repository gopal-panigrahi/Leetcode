// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
  int mostWordsFound(vector<string> &sentences) {
    int maxCount = 0;
    for (string s : sentences) {
      int count = 0;
      for (char c : s) {
        if (c == ' ') {
          count += 1;
        }
      }
      if (s.length() > 0) {
        count += 1;
      }

      if (count > maxCount) {
        maxCount = count;
      }
    }
    return maxCount;
  }
};