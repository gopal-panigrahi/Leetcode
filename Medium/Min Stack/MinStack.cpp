// https://leetcode.com/problems/min-stack

class MinStack {
  vector<int> st;

public:
  MinStack() { ios::sync_with_stdio(0), cin.tie(0), cin.tie(0); }

  void push(int val) { st.push_back(val); }

  void pop() { st.pop_back(); }

  int top() { return st.back(); }

  int getMin() { return *min_element(st.begin(), st.end()); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */