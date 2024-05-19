// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
  int firstUniqChar(string s) {
    int ht[26] = {0};
    for (int i = 0; s[i]; i++) {
      ht[s[i] - 97]++;
    }
    for (int i = 0; s[i]; i++) {
      if (ht[s[i] - 97] == 1) {
        return i;
      }
    }
    return -1;
  }
};