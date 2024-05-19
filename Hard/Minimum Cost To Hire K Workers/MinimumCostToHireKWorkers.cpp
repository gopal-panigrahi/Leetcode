// https://leetcode.com/problems/minimum-cost-to-hire-k-workers

class Solution {
public:
  double mincostToHireWorkers(vector<int> &quality, vector<int> &wage, int k) {
    vector<pair<double, int>> ratio;
    int n = quality.size();

    for (int i = 0; i < n; ++i) {
      ratio.push_back(pair<double, int>(double(wage[i]) / quality[i], i));
    }

    sort(begin(ratio), end(ratio));
    priority_queue<int> pq;
    int qs = 0;
    double max_rate = 0.0;

    for (int i = 0; i < k; ++i) {
      qs += quality[ratio[i].second];
      max_rate = max(max_rate, ratio[i].first);
      pq.push(quality[ratio[i].second]);
    }

    double res = max_rate * qs;
    for (int i = k; i < n; ++i) {
      max_rate = max(max_rate, ratio[i].first);
      qs -= pq.top();
      pq.pop();

      qs += quality[ratio[i].second];
      pq.push(quality[ratio[i].second]);
      res = min(res, max_rate * qs);
    }

    return res;
  }
};