// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>> &points, int K) {
    if (points.empty()) {
      return vector<vector<int>>();
    }

    sort(points.begin(), points.end(), SORT_BY_EUCLIDEAN_DIST);
    points.resize(K);
    return points;
  }
  static bool SORT_BY_EUCLIDEAN_DIST(vector<int> cord1, vector<int> cord2) {
    float d1 = sqrt(cord1[0] * cord1[0] + cord1[1] * cord1[1]);
    float d2 = sqrt(cord2[0] * cord2[0] + cord2[1] * cord2[1]);
    return d1 <= d2;
  }
};