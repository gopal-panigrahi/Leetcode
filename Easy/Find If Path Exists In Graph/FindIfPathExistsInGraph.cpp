// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
  vector<int> p;
  vector<int> rank;

public:
  void init(int n) {
    p.assign(n, 0);
    iota(p.begin(), p.end(), 0);
    rank.assign(n, 0);
  }

  int findSet(int node) {
    return p[node] == node ? node : (p[node] = findSet(p[node]));
  }

  void unionSet(int node1, int node2) {
    if (isSameSet(node1, node2))
      return;
    int x = findSet(node1), y = findSet(node2);
    if (rank[x] > rank[y])
      swap(rank[x], rank[y]);
    p[x] = y;
    if (rank[x] == rank[y])
      ++rank[y];
  }

  bool isSameSet(int node1, int node2) {
    return findSet(node1) == findSet(node2);
  }

  bool validPath(int n, vector<vector<int>> &edges, int source,
                 int destination) {

    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    init(n);
    for (auto e : edges) {
      unionSet(e[0], e[1]);
    }

    return isSameSet(source, destination);
  }
};