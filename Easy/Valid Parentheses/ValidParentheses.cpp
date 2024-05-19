// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
  bool isValid(string s) {
    if (s.length() == 0) {
      return true;
    }
    stack<char> st;
    for (const char &c : s) {
      if (isOpen(c)) {
        st.push(c);
      } else {
        if (st.empty()) {
          return false;
        }
        char tos = st.top();
        if (tos == '(' && c == ')') {
          st.pop();
        } else if (tos == '[' && c == ']') {
          st.pop();
        } else if (tos == '{' && c == '}') {
          st.pop();
        } else {
          return false;
        }
      }
    }
    return st.empty();
  }
  inline bool isOpen(char c) { return c == '(' || c == '[' || c == '{'; }
};