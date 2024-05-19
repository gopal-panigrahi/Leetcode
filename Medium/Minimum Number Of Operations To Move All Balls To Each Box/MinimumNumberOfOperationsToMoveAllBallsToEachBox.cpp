// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
  vector<int> minOperations(string boxes) {
    vector<int> moves;
    for (int i = 0; i < boxes.length(); i++) {
      int count = 0;
      for (int j = 0; j < boxes.length(); j++) {
        if (boxes[j] == '1') {
          count += abs(j - i);
        }
      }
      moves.push_back(count);
    }
    return moves;
  }
};