// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
  int maxCoins(vector<int> &piles) {
    sort(piles.begin(), piles.end());

    int small_pile = 0, big_pile = piles.size() - 1;

    int myWealth = 0;

    while (small_pile < big_pile - 1) {
      myWealth += piles[big_pile - 1];
      small_pile++;
      big_pile -= 2;
    }
    return myWealth;
  }
};