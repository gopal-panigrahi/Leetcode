// https://leetcode.com/problems/largest-local-values-in-a-matrix

class Solution {
public:
  vector<vector<int>> largestLocal(vector<vector<int>> &grid) {
    int n = grid.size();
    vector<vector<int>> maxGrid(n - 2, vector<int>(n - 2, 0));

    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < n - 1; j++) {
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i - 1][j - 1]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i - 1][j]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i - 1][j + 1]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i][j - 1]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i][j]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i][j + 1]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i + 1][j - 1]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i + 1][j]);
        maxGrid[i - 1][j - 1] = max(maxGrid[i - 1][j - 1], grid[i + 1][j + 1]);
      }
    }
    return maxGrid;
  }
};