// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    if (prices.size() == 0) {
      return 0;
    }
    int maxprofit = 0;
    reverse(prices.begin(), prices.end());
    int max = prices.front();
    for (int i : prices) {
      if (max < i) {
        max = i;
      }
      if (maxprofit < (max - i)) {
        maxprofit = (max - i);
      }
    }

    return maxprofit;
  }
};