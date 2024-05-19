// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words

class Solution {
public:
  bool isAcronym(vector<string> &words, string s) {
    string acronym = "";
    for (string word : words) {
      acronym += word[0];
    }
    return s == acronym;
  }
};