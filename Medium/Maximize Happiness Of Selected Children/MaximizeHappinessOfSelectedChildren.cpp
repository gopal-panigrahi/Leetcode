// https://leetcode.com/problems/maximize-happiness-of-selected-children

class Solution {
public:
  long long maximumHappinessSum(vector<int> &happiness, int k) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    sort(happiness.begin(), happiness.end(), greater<int>());
    long long sum = 0;
    for (int i = 0; i < k; i++) {
      sum += max(happiness[i] - i, 0);
    }

    return sum;
  }
};