// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
  int countMatches(vector<vector<string>> &items, string ruleKey,
                   string ruleValue) {
    int index = 0;
    int count = 0;
    if (ruleKey == "type") {
      index = 0;
    } else if (ruleKey == "color") {
      index = 1;
    } else if (ruleKey == "name") {
      index = 2;
    }
    for (auto item : items) {
      if (item[index] == ruleValue) {
        count += 1;
      }
    }
    return count;
  }
};