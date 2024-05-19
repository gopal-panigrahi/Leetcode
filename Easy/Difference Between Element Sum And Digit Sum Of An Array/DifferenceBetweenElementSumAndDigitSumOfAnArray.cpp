// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
  int differenceOfSum(vector<int> &nums) {
    int numSum = 0;
    int digitSum = 0;
    for (int num : nums) {
      numSum += num;
      digitSum += sumOfDigits(num);
    }
    return abs(numSum - digitSum);
  }

  int sumOfDigits(int num) {
    int sum = 0;
    while (num) {
      sum += num % 10;
      num /= 10;
    }
    return sum;
  }
};