// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
  int countConsistentStrings(string allowed, vector<string> &words) {
    bitset<26> alphabet;
    for (char c : allowed) {
      alphabet.set(c - 'a');
    }
    int count = 0;
    for (string s : words) {
      bool isconsistent = true;
      for (char c : s) {
        isconsistent &= alphabet.test(c - 'a');
      }
      if (isconsistent) {
        count++;
      }
    }
    return count;
  }
};