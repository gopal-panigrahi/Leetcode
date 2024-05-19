// https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree

class Solution {
public:
  vector<int> pathInZigZagTree(int label) {
    vector<int> path;
    while (label != 1) {
      path.push_back(label);
      label = parent(label);
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    return path;
  }
  int parent(int node) {
    int highest2power = log2(node);
    int lowlimit = 1 << highest2power;
    int uplimit = (1 << (highest2power + 1)) - 1;

    int diff = uplimit - node;
    return (lowlimit + diff) >> 1;
  }
};