// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
  vector<int> costarray;
  int minCostClimbingStairs(vector<int> &cost) {
    costarray.assign(1001, 0);
    return min(minCost(cost.size() - 1, cost), minCost(cost.size() - 2, cost));
  }
  int minCost(int n, vector<int> &cost) {
    if (n < 0) {
      return 0;
    }
    if (costarray[n] == 0) {
      costarray[n] = cost[n] + min(minCost(n - 1, cost), minCost(n - 2, cost));
    }
    return costarray[n];
  }
};