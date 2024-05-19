// https://leetcode.com/problems/partition-labels

class Solution {
public:
  vector<int> partitionLabels(string S) {
    int ht[26] = {0};
    for (int i = 0; S[i]; i++) {
      ht[S[i] - 'a'] = i;
    }
    vector<int> partition;
    int start = 0, last = ht[S[start] - 'a'];
    for (int i = 0; S[i]; i++) {
      if (i == last) {
        partition.push_back(last - start + 1);
        start = last + 1;
        if (S[start] == '\0')
          break;
        last = ht[S[start] - 'a'];
      }
      if (ht[S[i] - 'a'] > last) {
        last = ht[S[i] - 'a'];
      }
    }
    return partition;
  }
};