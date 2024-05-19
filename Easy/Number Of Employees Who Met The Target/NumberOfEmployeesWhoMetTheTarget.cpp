// https://leetcode.com/problems/number-of-employees-who-met-the-target

class Solution {
public:
  int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target) {
    int count = 0;
    for (int hour : hours) {
      if (hour >= target) {
        count++;
      }
    }
    return count;
  }
};