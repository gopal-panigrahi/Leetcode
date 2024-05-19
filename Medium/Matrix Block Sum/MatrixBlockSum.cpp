// https://leetcode.com/problems/matrix-block-sum

class Solution {
public:
  vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k) {
    vector<vector<int>> summationmatrix(mat.size(), vector<int>(mat[0].size()));
    vector<vector<int>> answer(mat.size(), vector<int>(mat[0].size()));
    summationmatrix[0][0] = mat[0][0];

    for (int i = 1; i < mat.size(); i++) {
      summationmatrix[i][0] = summationmatrix[i - 1][0] + mat[i][0];
    }

    for (int i = 1; i < mat[0].size(); i++) {
      summationmatrix[0][i] = summationmatrix[0][i - 1] + mat[0][i];
    }

    for (int i = 1; i < mat.size(); i++) {
      for (int j = 1; j < mat[0].size(); j++) {
        summationmatrix[i][j] = summationmatrix[i - 1][j] +
                                summationmatrix[i][j - 1] -
                                summationmatrix[i - 1][j - 1] + mat[i][j];
      }
    }

    for (int i = 0; i < mat.size(); i++) {
      for (int j = 0; j < mat[0].size(); j++) {
        int x1 = min(i + k, int(mat.size()) - 1);
        int y1 = min(j + k, int(mat[0].size()) - 1);
        answer[i][j] = summationmatrix[x1][y1];
        if (i - k > 0) {
          answer[i][j] -= summationmatrix[i - k - 1][y1];
        }
        if (j - k > 0) {
          answer[i][j] -= summationmatrix[x1][j - k - 1];
        }
        if (i - k > 0 && j - k > 0) {
          answer[i][j] += summationmatrix[i - k - 1][j - k - 1];
        }
      }
    }
    return answer;
  }
};