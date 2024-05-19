// https://leetcode.com/problems/k-th-smallest-prime-fraction

class Solution {
public:
  static bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first * b.second < b.first * a.second) {
      return true;
    } else {
      return false;
    }
  }

  vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    vector<pair<int, int>> fractional_array;

    for (int i = 0; i < arr.size() - 1; i++) {
      for (int j = i + 1; j < arr.size(); j++) {
        fractional_array.push_back(pair<int, int>(arr[i], arr[j]));
      }
    }

    sort(fractional_array.begin(), fractional_array.end(), compare);

    return {fractional_array[k - 1].first, fractional_array[k - 1].second};
  }
};