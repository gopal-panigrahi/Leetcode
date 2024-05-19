// https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
  bool isPalindrome(string word) {
    bool flag = true;
    int start = 0, end = word.length() - 1;
    while (start < end) {
      if (word[start] != word[end]) {
        flag = false;
        break;
      }
      start++;
      end--;
    }
    return flag;
  }

  string firstPalindrome(vector<string> &words) {
    for (string word : words) {
      if (isPalindrome(word)) {
        return word;
      }
    }
    return "";
  }
};