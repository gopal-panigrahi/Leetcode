// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
  string reversePrefix(string word, char ch) {
    int index = word.find_first_of(ch);
    if (index != string::npos) {
      reverse(word.begin(), word.begin() + index + 1);
    }
    return word;
  }
};