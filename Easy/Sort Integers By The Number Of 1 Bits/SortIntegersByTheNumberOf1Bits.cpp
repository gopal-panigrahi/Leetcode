// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
  static bool comp(int x, int y) {
    if (__builtin_popcount(x) < __builtin_popcount(y)) {
      return true;
    } else if (__builtin_popcount(x) > __builtin_popcount(y)) {
      return false;
    } else {
      if (x < y) {
        return true;
      } else {
        return false;
      }
    }
  }
  vector<int> sortByBits(vector<int> &arr) {
    stable_sort(arr.begin(), arr.end(), comp);
    return arr;
  }
};