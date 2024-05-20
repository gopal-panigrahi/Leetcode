// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points

class Solution {
public:
  int maxWidthOfVerticalArea(vector<vector<int>> &points) {
    sort(points.begin(), points.end(),
         [](vector<int> &a, vector<int> &b) { return a[0] < b[0]; });

    int max = 0;
    for (int i = 1; i < points.size(); i++) {
      int width = points[i][0] - points[i - 1][0];
      if (max < width) {
        max = width;
      }
    }

    return max;
  }
};