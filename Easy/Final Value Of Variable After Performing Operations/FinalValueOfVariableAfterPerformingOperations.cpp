// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
  int finalValueAfterOperations(vector<string> &operations) {
    int result = 0;
    for (string op : operations) {
      if (op == "X++" || op == "++X") {

        result += 1;
      } else if (op == "X--" || op == "--X") {

        result -= 1;
      }
    }
    return result;
  }
};