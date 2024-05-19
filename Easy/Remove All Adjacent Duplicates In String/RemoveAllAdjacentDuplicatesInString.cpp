// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
  string removeDuplicates(string S) {
    stack<char> st;
    st.push('.');
    for (char c : S) {
      if (c == st.top()) {
        st.pop();
      } else {
        st.push(c);
      }
    }
    string uniq = "";
    while (st.top() != '.') {
      uniq += st.top();
      st.pop();
    }
    reverse(begin(uniq), end(uniq));
    return uniq;
  }
};