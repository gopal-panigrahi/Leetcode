// https://leetcode.com/problems/russian-doll-envelopes

class Solution {
public:
  int maxEnvelopes(vector<vector<int>> &envelopes) {
    if (envelopes.empty()) {
      return 0;
    }
    sort(envelopes.begin(), envelopes.end());
    vector<int> maxEnvelope(envelopes.size(), 1);
    for (int i = 0; i < envelopes.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (envelopes[j][0] < envelopes[i][0] &&
            envelopes[j][1] < envelopes[i][1]) {
          if (maxEnvelope[i] < (maxEnvelope[j] + 1)) {
            maxEnvelope[i] = maxEnvelope[j] + 1;
          }
        }
      }
    }

    return *max_element(maxEnvelope.begin(), maxEnvelope.end());
  }
};