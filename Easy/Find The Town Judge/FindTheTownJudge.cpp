// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
  int findJudge(int n, vector<vector<int>> &trust) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    vector<int> degrees(n);
    for (int i = 0; i < trust.size(); i++) {
      degrees[trust[i][0] - 1] -= 1;
      degrees[trust[i][1] - 1] += 1;
    }

    for (int i = 0; i < n; i++) {
      if (degrees[i] == n - 1) {
        return i + 1;
      }
    }
    return -1;
  }
};