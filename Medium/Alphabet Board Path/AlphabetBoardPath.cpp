// https://leetcode.com/problems/alphabet-board-path

class Solution {
public:
  string alphabetBoardPath(string target) {
    int x1 = 0, y1 = 0, x2, y2, ascii;
    string s = "";
    for (char c : target) {
      ascii = c - 'a';
      x2 = ascii / 5;
      y2 = ascii % 5;
      int UD = x2 - x1, RL = y2 - y1;
      if (UD > 0) {
        if (x2 == 5 && y1 != 0) {
          UD--;
        }
        for (int i = 0; i < UD; i++) {
          s += 'D';
        }
      } else if (UD < 0) {
        for (int i = 0; i < (-UD); i++) {
          s += 'U';
        }
      }
      if (RL > 0) {
        for (int i = 0; i < RL; i++) {
          s += 'R';
        }
      } else if (RL < 0) {
        for (int i = 0; i < (-RL); i++) {
          s += 'L';
        }
      }
      if (x2 == 5 && y1 != 0) {
        s += 'D';
      }
      s += '!';
      x1 = x2;
      y1 = y2;
    }
    return s;
  }
};