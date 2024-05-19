// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
  vector<int> countPoints(vector<vector<int>> &points,
                          vector<vector<int>> &queries) {
    vector<int> result;
    int count, p1, p2, d;
    for (auto query : queries) {
      count = 0;
      for (auto point : points) {
        p1 = query[0] - point[0];
        p2 = query[1] - point[1];
        d = p1 * p1 + p2 * p2;
        if (d <= query[2] * query[2]) {
          count++;
        }
      }
      result.push_back(count);
    }
    return result;
  }
};