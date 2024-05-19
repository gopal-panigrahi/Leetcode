// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int maxWealth = 0, wealth = 0;
    for (auto account : accounts) {
      wealth = accumulate(account.begin(), account.end(), 0);
      if (wealth > maxWealth) {
        maxWealth = wealth;
      }
    }

    return maxWealth;
  }
};