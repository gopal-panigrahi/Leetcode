// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty()) {
      return "";
    }
    string s = *min_element(strs.begin(), strs.end(), [](string a, string b) {
      return a.length() <= b.length();
    });
    string g = "";
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      for (int j = 0; j < strs.size(); j++) {
        if (c != strs[j][i]) {
          return g;
        }
      }
      g += c;
    }
    return s;
  }
};