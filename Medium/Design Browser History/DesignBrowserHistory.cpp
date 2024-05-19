// https://leetcode.com/problems/design-browser-history

struct Node {
  Node *next;
  Node *prev;
  string val;
  Node(string x) {
    val = x;
    next = nullptr;
    prev = nullptr;
  }
};

class BrowserHistory {
  Node *start;
  Node *current;

public:
  BrowserHistory(string homepage) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    start = current = new Node(homepage);
  }

  void visit(string url) {
    current->next = new Node(url);
    current->next->prev = current;
    current = current->next;
  }

  string back(int steps) {
    while (steps-- && current->prev) {
      current = current->prev;
    }
    return current->val;
  }

  string forward(int steps) {
    while (steps-- && current->next) {
      current = current->next;
    }
    return current->val;
  }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */