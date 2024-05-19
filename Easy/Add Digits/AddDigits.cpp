// https://leetcode.com/problems/add-digits

class Solution {
public:
  int addDigits(int num) {
    int sum;
    do {
      sum = 0;
      while (num) {
        sum += num % 10;
        num /= 10;
      }
      num = sum;
    } while (num >= 10);
    return sum;
  }
};