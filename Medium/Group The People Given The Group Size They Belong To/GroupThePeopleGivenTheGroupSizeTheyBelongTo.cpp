// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int> &groupSizes) {
    unordered_map<int, vector<int>> groups;
    vector<vector<int>> result;

    int n = groupSizes.size();

    for (int i = 0; i < n; i++) {
      int groupSize = groupSizes[i];
      groups[groupSize].push_back(i);
      if (groupSize == groups[groupSize].size()) {
        result.push_back(groups[groupSize]);
        groups[groupSize].clear();
      }
    }

    return result;
  }
};