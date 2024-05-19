// https://leetcode.com/problems/di-string-match

class Solution {
public:
  vector<int> diStringMatch(string S) {
    vector<int> res;
    int large = S.length(), small = 0;
    for (char c : S) {
      if (c == 'I') {
        res.push_back(small);
        small++;
      } else {
        res.push_back(large);
        large--;
      }
    }
    res.push_back(small);
    return res;
  }
};