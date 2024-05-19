// https://leetcode.com/problems/majority-element

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> ht;
    for (int i : nums) {
      ht[i]++;
    }
    int n = nums.size() / 2;
    for (auto i : ht) {
      if (i.second > n) {
        n = i.first;
        break;
      }
    }
    return n;
  }
};