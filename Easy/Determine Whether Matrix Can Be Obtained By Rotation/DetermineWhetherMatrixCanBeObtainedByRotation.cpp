class Solution {
public:
  bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target) {
    int n = mat.size() - 1;

    bool deg0 = true, deg90 = true, deg180 = true, deg270 = true;

    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        deg0 &= mat[i][j] == target[i][j];
        deg90 &= (mat[j][n - i] == target[i][j]);
        deg180 &= mat[n - i][n - j] == target[i][j];
        deg270 &= mat[n - j][i] == target[i][j];
      }
    }
    return deg0 || deg90 || deg180 || deg270;
  }
};