// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
  vector<int> tribonacci_array;
  Solution() {
    tribonacci_array.assign(38, -1);
    tribonacci_array[0] = 0;
    tribonacci_array[1] = tribonacci_array[2] = 1;
  }
  int tribonacci(int n) {
    if (tribonacci_array[n] != -1) {
      return tribonacci_array[n];
    } else {
      tribonacci_array[n] =
          tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
      return tribonacci_array[n];
    }
  }
};