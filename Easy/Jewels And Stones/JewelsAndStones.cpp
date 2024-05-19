// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    unordered_map<int, int> ht;
    for (char c : stones) {
      ht[c]++;
    }
    int count = 0;
    for (char c : jewels) {
      count += ht[c];
    }
    return count;
  }
};