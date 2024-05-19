// https://leetcode.com/problems/maximum-length-of-pair-chain

class Solution {
public:
  int findLongestChain(vector<vector<int>> &pairs) {
    if (pairs.empty()) {
      return 0;
    }
    sort(pairs.begin(), pairs.end());
    vector<int> chainLengthDP(pairs.size(), 1);
    for (int i = 0; i < pairs.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (pairs[j][1] < pairs[i][0]) {
          chainLengthDP[i] = max(chainLengthDP[i], chainLengthDP[j] + 1);
        }
      }
    }

    return *max_element(chainLengthDP.begin(), chainLengthDP.end());
  }
};