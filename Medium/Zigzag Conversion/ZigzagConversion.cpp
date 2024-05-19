// https://leetcode.com/problems/zigzag-conversion

class Solution {
public:
  string convert(string s, int numRows) {
    if (numRows == 1) {
      return s;
    }
    unordered_map<int, string> table;
    int period = (numRows - 1) * 2;
    string convertedString = "";
    for (int x = 0; x < s.length(); x++) {
      int y = abs((x % period) - numRows + 1);
      table[y] += s[x];
    }
    for (int i = 0; i < numRows; i++) {
      convertedString = table[i] + convertedString;
    }

    return convertedString;
  }
};