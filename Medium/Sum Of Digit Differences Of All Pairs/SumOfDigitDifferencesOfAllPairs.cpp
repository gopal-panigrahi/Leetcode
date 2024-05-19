// https://leetcode.com/problems/sum-of-digit-differences-of-all-pairs

class Solution {
public:
  long long C(long long n, long long r) {
    if (n < r) {
      return 0;
    }

    long long numerator = 1;
    for (long long i = 0; i < r; i++) {
      numerator *= n - i;
    }
    long long denominator = 1;
    for (long long i = r; i > 0; i--) {
      denominator *= i;
    }
    return numerator / denominator;
  }

  long long countDigits(long long num) {
    long long count = 0;
    while (num) {
      count++;
      num /= 10;
    }
    return count;
  }

  long long sumDigitDifferences(vector<int> &nums) {
    long long totalNums = nums.size();
    long long digitCount = countDigits(nums[0]);

    vector<vector<long long>> freq(digitCount, vector<long long>(10));

    for (long long i = 0; i < nums.size(); i++) {
      long long n = nums[i];
      for (long long i = 0; n; i++) {
        freq[i][n % 10]++;
        n /= 10;
      }
    }

    long long totalSumDiff = 0;
    for (long long i = 0; i < digitCount; i++) {
      long long sumDiff = C(nums.size(), 2);

      for (long long j = 0; j < 10; j++) {
        if (freq[i][j] > 1) {
          sumDiff -= C(freq[i][j], 2);
        }
      }

      totalSumDiff += sumDiff;
    }
    return totalSumDiff;
  }
};