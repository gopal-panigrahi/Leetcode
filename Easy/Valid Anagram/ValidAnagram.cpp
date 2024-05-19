// https://leetcode.com/problems/valid-anagram

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }
    int ht1[26] = {0}, ht2[26] = {0};
    for (int i = 0; s[i]; i++) {
      ht1[s[i] - 97]++;
      ht2[t[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
      if (ht1[i] != ht2[i]) {
        return false;
      }
    }
    return true;
  }
};