// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
  bool repeatedSubstringPattern(string s) {
    hash<string> hash;
    vector<int> divisor;
    divisor = findDivisor(s);
    sort(divisor.begin(), divisor.end());
    divisor.pop_back();
    for (int step : divisor) {
      bool flag = true;
      unsigned long hashedval = hash(s.substr(0, step));
      for (int j = 0; j < s.length(); j += step) {
        unsigned long hashedstring = hash(s.substr(j, step));
        if (hashedstring != hashedval) {
          flag = false;
          break;
        }
      }
      if (flag) {
        return flag;
      }
    }
    return false;
  }
  vector<int> findDivisor(string s) {
    vector<int> divisor;
    int len = s.length();
    int terminate = sqrt(s.length());
    for (int i = 1; i <= terminate; i++) {
      if (len % i == 0) {
        divisor.push_back(i);
        if (i != (len / i))
          divisor.push_back(len / i);
      }
    }
    return divisor;
  }
};