// https://leetcode.com/problems/count-primes

class Solution {
public:
  int countPrimes(int n) {
    if (n <= 2) {
      return 0;
    }
    bool prime[1 + (n >> 1)];
    memset(prime, true, sizeof(prime));
    for (long i = 3; i < n; i += 2) {
      if (prime[i >> 1]) {
        for (long j = i * i; j < n; j += i << 1) {
          prime[j >> 1] = 0;
        }
      }
    }
    int count = 0;
    for (int i = 1; i < n; i += 2) {
      count += prime[i >> 1];
    }
    return count;
  }
};