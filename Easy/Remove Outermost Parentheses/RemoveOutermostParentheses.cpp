// https://leetcode.com/problems/remove-outermost-parentheses

class Solution {
public:
  string removeOuterParentheses(string S) {
    int bracketCount = 0;
    int start = 0, cur = 0;
    string resultS = "";
    for (char c : S) {
      if (c == '(') {
        bracketCount += 1;
      } else {
        bracketCount -= 1;
      }
      if (bracketCount == 0) {
        resultS += S.substr(start + 1, cur - start - 1);
        start = cur + 1;
      }
      cur++;
    }
    return resultS;
  }
};