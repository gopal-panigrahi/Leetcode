// https://leetcode.com/problems/check-if-grid-satisfies-conditions

class Solution {
public:
  bool satisfiesConditions(vector<vector<int>> &grid) {
    bool isSatisfied = true;
    int n = grid.size(), m = grid[0].size();

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (i + 1 != n) {
          isSatisfied &= grid[i][j] == grid[i + 1][j];
        }
        if (j + 1 != m) {
          isSatisfied &= grid[i][j] != grid[i][j + 1];
        }

        if (isSatisfied == false) {
          return false;
        }
      }
    }
    return isSatisfied;
  }
};