// https://leetcode.com/problems/reverse-integer

class Solution {
public:
  int reverse(int x) {
    long rev = 0, temp = abs(x);
    while (temp) {
      rev = (rev * 10) + (temp % 10);
      temp /= 10;
    }
    rev = (x < 0) ? -rev : rev;
    if ((numeric_limits<int>::max() > rev) &&
        (numeric_limits<int>::min() < rev)) {
      return rev;
    } else {
      return 0;
    }
  }
};