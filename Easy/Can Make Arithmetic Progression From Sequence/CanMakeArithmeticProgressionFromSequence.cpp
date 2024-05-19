// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

class Solution {
public:
  bool canMakeArithmeticProgression(vector<int> &arr) {
    if (arr.empty()) {
      return false;
    }
    sort(arr.begin(), arr.end());

    int diff = arr[1] - arr[0];
    for (int i = 1; i < int(arr.size()); i++) {
      if ((arr[i] - arr[i - 1]) != diff) {
        return false;
      }
    }
    return true;
  }
};