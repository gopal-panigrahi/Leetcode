// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
  int maxDepth(string s) {
    int nestingDepth = 0;
    int currentDepth = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(') {
        currentDepth++;
      } else if (s[i] == ')') {
        currentDepth--;
      }
      nestingDepth = max(nestingDepth, currentDepth);
    }
    return nestingDepth;
  }
};