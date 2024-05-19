// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
public:
  int minPartitions(string n) {
    int asciiVal = 0;
    int max = 0;
    for (char c : n) {

      asciiVal = c - 48;
      if (asciiVal > max) {
        max = asciiVal;
      }
    }

    return max;
  }
};