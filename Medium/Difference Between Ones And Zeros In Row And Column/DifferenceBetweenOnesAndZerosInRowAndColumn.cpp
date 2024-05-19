// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column

class Solution {
public:
  vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<int> r_ones(m), c_ones(n);

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          r_ones[i]++;
          c_ones[j]++;
        }
      }
    }

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        grid[i][j] = 2 * r_ones[i] + 2 * c_ones[j] - m - n;
      }
    }
    return grid;
  }
};