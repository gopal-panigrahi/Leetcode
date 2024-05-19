// https://leetcode.com/problems/sum-of-all-odd-length-subarrays

class Solution {
public:
  int sumOddLengthSubarrays(vector<int> &arr) {
    int total = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      total += arr[i] * ceil(((i + 1) * (n - i)) / 2.0);
    }
    return total;
  }
};