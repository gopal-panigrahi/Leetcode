// https://leetcode.com/problems/longest-string-chain

class Solution {
public:
  int longestStrChain(vector<string> &words) {
    if (words.empty()) {
      return 0;
    }

    vector<vector<pair<string, int>>> ht(17);
    int k = 0;
    for (const string w : words) {
      ht[w.length()].push_back(make_pair(w, k));
      k++;
    }
    vector<int> clen(words.size(), 1);
    for (int i = 2; i < 17; i++) {
      for (auto w2 : ht[i]) {
        for (auto w1 : ht[i - 1]) {
          if (isSatisfy(w2.first, w1.first)) {
            clen[w2.second] = max(clen[w2.second], clen[w1.second] + 1);
          }
        }
      }
    }

    return *max_element(clen.begin(), clen.end());
  }

  bool isSatisfy(string a, string b) {
    vector<int> ht(26, 0);
    for (char c : a) {
      ht[c - 'a']++;
    }
    for (char c : b) {
      ht[c - 'a']--;
    }
    int sum = accumulate(ht.begin(), ht.end(), 0,
                         [](int x, int y) { return x + abs(y); });
    if (sum <= 1) {
      return true;
    } else {
      return false;
    }
  }
};