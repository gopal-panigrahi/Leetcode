// https://leetcode.com/problems/sorting-the-sentence

class Solution {
public:
  string sortSentence(string s) {
    vector<string> line(9);
    string w = "";
    for (int i = 0; i < s.length(); i++) {
      if (0 <= s[i] - '1' && s[i] - '1' < 9) {
        line[s[i] - '1'] = w;
        w = "";
      } else if (s[i] != ' ') {
        w += s[i];
      }
    }

    string sS = "";
    for (int i = 0; i < 9; i++) {
      if (line[i] != "") {
        sS += line[i] + " ";
      }
    }

    return sS.erase(sS.length() - 1, 1);
  }
};