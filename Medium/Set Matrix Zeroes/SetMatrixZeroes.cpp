// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int rowCount = matrix.size(), colCount = matrix[0].size();

    vector<int> row(rowCount), col(colCount);
    for (int i = 0; i < rowCount; i++) {
      for (int j = 0; j < colCount; j++) {
        if (matrix[i][j] == 0) {
          row[i] = 1;
          col[j] = 1;
        }
      }
    }
    for (int i = 0; i < rowCount; i++) {
      for (int j = 0; j < colCount; j++) {
        if (row[i] || col[j]) {
          matrix[i][j] = 0;
        }
      }
    }
  }
};