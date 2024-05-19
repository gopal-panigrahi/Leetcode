// https://leetcode.com/problems/max-increase-to-keep-city-skyline

class Solution {
public:
  int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
    vector<int> north_south(grid.size(), 0), east_west(grid.size(), 0);
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[i].size(); j++) {
        north_south[j] = max(north_south[j], grid[i][j]);
        east_west[i] = max(east_west[i], grid[i][j]);
      }
    }

    int maxIncrease = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[i].size(); j++) {
        int minIncrease = min(north_south[j], east_west[i]);
        maxIncrease += minIncrease - grid[i][j];
      }
    }

    return maxIncrease;
  }
};