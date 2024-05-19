// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
  string interpret(string command) {
    string s = "", result = "";
    for (auto a : command) {
      if (a == '(') {
        s += a;
      } else if (a == ')') {

        s += a;

        if (s == "(al)") {
          result += "al";
          s = "";
        } else if (s == "()") {
          result += "o";
          s = "";
        }
      } else if (a == 'G') {
        result += 'G';
      } else {

        s += a;
      }
    }
    return result;
  }
};