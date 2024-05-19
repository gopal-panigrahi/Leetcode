// https://leetcode.com/problems/water-bottles

class Solution {
public:
  int numWaterBottles(int numBottles, int numExchange) {
    int drankBottles = numBottles, emptyBottles = numBottles;
    while (emptyBottles >= numExchange) {
      int newBottles = emptyBottles / numExchange;
      emptyBottles = newBottles + (emptyBottles % numExchange);
      drankBottles += newBottles;
    }
    return drankBottles;
  }
};