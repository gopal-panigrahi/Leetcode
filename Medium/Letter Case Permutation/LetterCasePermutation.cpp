// https://leetcode.com/problems/letter-case-permutation

class Solution {
public:
  vector<string> letterCasePermutation(string s) {
    int letterCount =
        count_if(s.begin(), s.end(), [](char c) { return isalpha(c); });
    if (letterCount == 0) {
      return vector<string>({s});
    }
    vector<string> result(1 << letterCount);
    for (int i = 0; i < 1 << letterCount; i++) {
      int temp = i;
      for (char &c : s) {
        if (!isalpha(c)) {
          continue;
        }
        if (temp & 1) {
          c = tolower(c);
        } else {
          c = toupper(c);
        }
        temp >>= 1;
      }
      result[i] = s;
    }
    return result;
  }
};