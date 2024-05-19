// https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
  bool judgeCircle(string moves) {
    int h = 0, v = 0;
    for (char dir : moves) {

      switch (dir) {
      case 'L':
        h -= 1;
        break;
      case 'R':
        h += 1;
        break;

      case 'U':
        v += 1;
        break;
      case 'D':
        v -= 1;
      }
    }

    return v == 0 && h == 0;
  }
};