// https://leetcode.com/problems/find-the-difference

class Solution {
public:
  char findTheDifference(string s, string t) {
    unordered_map<char, int> freq_table;
    for (int i = 0; i < t.length(); i++) {
      freq_table[s[i]]++;
      freq_table[t[i]]--;
    }
    char result = 'a';
    for (auto f : freq_table) {
      if (f.second < 0) {
        result = f.first;
      }
    }
    return result;
  }
};