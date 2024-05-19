// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
  bool checkIfPangram(string sentence) {
    bitset<26> alphabet;
    for (char c : sentence) {
      alphabet.set(c - 'a');
    }
    return alphabet.all();
  }
};