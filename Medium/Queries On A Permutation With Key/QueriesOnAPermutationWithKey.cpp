// https://leetcode.com/problems/queries-on-a-permutation-with-key

class Solution {
public:
  vector<int> processQueries(vector<int> &queries, int m) {
    list<int> num(m);
    iota(num.begin(), num.end(), 1);
    vector<int> result;
    for (int q : queries) {
      auto itr = find(num.begin(), num.end(), q);
      result.push_back(distance(num.begin(), itr));
      num.erase(itr);
      num.insert(num.begin(), q);
    }
    return result;
  }
};