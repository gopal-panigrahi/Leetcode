// https://leetcode.com/problems/integer-break

class Solution {
public:
  int integerBreak(int n) {
    int maxProd = 0;
    for (int i = 2; i <= n; i++) {
      int d = n / i;
      int r = n % i;

      int prod = pow(d, (i - r)) * pow((d + 1), r);

      maxProd = max(maxProd, prod);
    }

    return maxProd;
  }
};