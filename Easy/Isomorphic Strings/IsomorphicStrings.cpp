// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
  bool isIsomorphic(string s, string t) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    string char_map1 = string(255, '.'), char_map2 = string(255, '.');
    for (int i = 0; i < s.length(); i++) {
      if (char_map1[s[i]] == '.' && char_map2[t[i]] == '.') {
        char_map1[s[i]] = t[i];
        char_map2[t[i]] = s[i];
      }
      if (char_map1[s[i]] != t[i]) {
        return false;
      }
    }
    return true;
  }
};