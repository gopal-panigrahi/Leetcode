// https://leetcode.com/problems/permutation-difference-between-two-strings

class Solution {
public:
  int findPermutationDifference(string s, string t) {
    unordered_map<char, int> pos;

    for (int i = 0; i < s.length(); i++) {
      pos[s[i]] = i;
    }

    int result = 0;
    for (int i = 0; i < t.length(); i++) {
      result += abs(i - pos[t[i]]);
    }

    return result;
  }
};