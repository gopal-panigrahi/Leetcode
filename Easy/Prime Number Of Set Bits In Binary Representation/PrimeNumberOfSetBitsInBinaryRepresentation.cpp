// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation

class Solution {
  static const int size = 32;
  bitset<size> sieve;

public:
  Solution() {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    sieve.set(0);
    sieve.set(1);

    for (int i = 2; i < size; i++) {
      if (!sieve.test(i)) {
        for (int j = i + i; j < size; j += i) {
          sieve.set(j);
        }
      }
    }
  }

  int countPrimeSetBits(int left, int right) {
    int count = 0;
    for (int i = left; i <= right; i++) {
      int set_bits = __builtin_popcount(i);
      if (!sieve.test(set_bits)) {
        count++;
      }
    }
    return count;
  }
};