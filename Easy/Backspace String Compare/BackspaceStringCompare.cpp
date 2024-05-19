// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
  bool backspaceCompare(string S, string T) {
    stack<char> st, tt;
    for (char c : S) {
      if (c == '#') {
        if (!st.empty())
          st.pop();
      } else {
        st.push(c);
      }
    }

    for (char c : T) {
      if (c == '#') {
        if (!tt.empty())
          tt.pop();
      } else {
        tt.push(c);
      }
    }

    S = T = "";
    while (!st.empty()) {
      S += st.top();
      st.pop();
    }

    while (!tt.empty()) {
      T += tt.top();
      tt.pop();
    }

    return S == T;
  }
};