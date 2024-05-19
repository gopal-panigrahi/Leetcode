// https://leetcode.com/problems/palindrome-number

class Solution {
public:
  bool isPalindrome(int x) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    string num = to_string(x);
    int low = 0, high = num.length() - 1;
    while (low < high) {
      if (num[low] != num[high]) {
        return false;
      }
      low++;
      high--;
    }
    return true;
  }
};