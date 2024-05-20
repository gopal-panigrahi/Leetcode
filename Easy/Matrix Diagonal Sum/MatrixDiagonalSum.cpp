class Solution {
public:
  int diagonalSum(vector<vector<int>> &mat) {
    int n = mat.size() - 1;
    int x = 0;
    int sum = 0;
    while (x <= n) {
      int y = x, y1 = n - x;
      if (y == y1) {
        sum -= mat[x][y];
      }
      sum += mat[x][y] + mat[x][y1];
      x++;
    }
    return sum;
  }
};