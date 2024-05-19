// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>> &points) {
    int time = 0;
    vector<int> cp;
    cp = points[0];
    for (auto point : points) {
      time += countTime(cp, point);
      cp = point;
    }
    return time;
  }
  int countTime(vector<int> &first, vector<int> &second) {
    int diff1, diff2;
    diff1 = abs(first[0] - second[0]);
    diff2 = abs(first[1] - second[1]);
    return (diff1 > diff2) ? diff1 : diff2;
  }
};