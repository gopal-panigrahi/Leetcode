// https://leetcode.com/problems/relative-ranks

class Solution {
public:
  vector<string> findRelativeRanks(vector<int> &score) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    int size = score.size();
    vector<int> scoreClone(size);
    vector<string> result(size);
    copy(score.begin(), score.end(), scoreClone.begin());
    sort(scoreClone.begin(), scoreClone.end(), std::greater<int>());
    unordered_map<int, string> ranks;
    for (int i = 0; i < size; i++) {
      if (i == 0) {
        ranks[scoreClone[i]] = "Gold Medal";
      } else if (i == 1) {
        ranks[scoreClone[i]] = "Silver Medal";
      } else if (i == 2) {
        ranks[scoreClone[i]] = "Bronze Medal";
      } else {
        ranks[scoreClone[i]] = to_string(i + 1);
      }
    }

    for (int i = 0; i < size; i++) {
      result[i] = ranks[score[i]];
    }
    return result;
  }
};