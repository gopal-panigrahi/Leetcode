// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet

class Solution {
public:
  vector<string> cellsInRange(string s) {
    vector<string> all_cells;
    char c1 = s[0], r1 = s[1], c2 = s[3], r2 = s[4];
    for (char i = c1; i <= c2; i++) {
      for (char j = r1; j <= r2; j++) {
        all_cells.push_back(string(1, i) + string(1, j));
      }
    }
    return all_cells;
  }
};