// https://leetcode.com/problems/spiral-matrix

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    int m = matrix.size(), n = matrix[0].size();

    if (m == 1 && n == 1) {
      return matrix[0];
    }

    vector<int> spiral(m * n);

    int top = 0, left = 0, right = n - 1, bottom = m - 1, index = 0;
    while (index < m * n) {
      for (int i = left; top <= bottom && i <= right; i++) {
        spiral[index++] = matrix[top][i];
      }
      top++;

      for (int i = top; left <= right && i <= bottom; i++) {
        spiral[index++] = matrix[i][right];
      }
      right--;

      for (int i = right; top <= bottom && i >= left; i--) {
        spiral[index++] = matrix[bottom][i];
      }
      bottom--;

      for (int i = bottom; left <= right && i >= top; i--) {
        spiral[index++] = matrix[i][left];
      }
      left++;
    }

    return spiral;
  }
};