// https://leetcode.com/problems/decode-xored-array

class Solution {
public:
  vector<int> decode(vector<int> &encoded, int first) {
    vector<int> result;
    result.push_back(first);
    for (int num : encoded) {
      result.push_back(result.back() ^ num);
    }
    return result;
  }
};