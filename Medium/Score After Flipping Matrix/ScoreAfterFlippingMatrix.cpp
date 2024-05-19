// https://leetcode.com/problems/score-after-flipping-matrix

class Solution {
public:
  int matrixScore(vector<vector<int>> &grid) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int rows = grid.size(), cols = grid[0].size();
    vector<pair<int, int>> bit_count(cols, pair<int, int>(0, 0));

    for (int i = 0; i < rows; i++) {
      bool flip = false;
      if (grid[i][0] == 0) {
        flip = true;
      }

      for (int j = 0; j < cols; j++) {
        grid[i][j] = flip ? !grid[i][j] : grid[i][j];
        bit_count[j].first += !grid[i][j];
        bit_count[j].second += grid[i][j];
      }
    }

    int result = 0;
    for (int i = 0; i < cols; i++) {
      if (bit_count[cols - i - 1].first < bit_count[cols - i - 1].second) {
        result += bit_count[cols - i - 1].second * 1 << i;
      } else {
        result += bit_count[cols - i - 1].first * 1 << i;
      }
    }
    return result;
  }
};