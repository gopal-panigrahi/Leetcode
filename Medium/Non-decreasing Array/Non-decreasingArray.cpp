// https://leetcode.com/problems/non-decreasing-array

class Solution {
public:
  bool case1(int a, int b, int c) { return a > b && b > c; }

  bool case2(int a, int b, int c) { return a <= b && b > c && a > c; }

  bool case3(int a, int b, int c) { return a < b && b > c && a < c; }

  bool case4(int a, int b, int c) { return a > b && b < c && a < c; }

  bool case5(int a, int b, int c) { return a > b && b < c && a > c; }

  bool case6(int a, int b, int c) { return a <= b && b <= c; }

  bool isNonDecreasing(vector<int> &nums, int start, int end) {
    for (int i = start + 1; i < end; i++) {
      if (nums[i - 1] > nums[i]) {
        return false;
      }
    }
    return true;
  }

  bool checkPossibility(vector<int> &nums, int i = 0, int count = 0) {
    int remaining_size = nums.size() - i;
    if (count == 2) {
      cout << "count" << endl;
      return false;
    }

    if (remaining_size <= 2) {
      cout << "r2" << endl;
      if (isNonDecreasing(nums, i, nums.size())) {
        return true;
      } else {
        return count == 0;
      }
    }

    if (remaining_size == 3 && !case1(nums[i], nums[i + 1], nums[i + 2])) {
      cout << "r3" << endl;
      if (case6(nums[i], nums[i + 1], nums[i + 2])) {
        return true;
      } else {
        return count == 0;
      }
    }

    if (case6(nums[i], nums[i + 1], nums[i + 2])) {
      return checkPossibility(nums, i + 1, count);
    } else {
      if (case1(nums[i], nums[i + 1], nums[i + 2])) {
        cout << "c1" << endl;
        return false;
      } else if (case2(nums[i], nums[i + 1], nums[i + 2])) {
        if (nums[i] >= nums[i + 3] || nums[i + 1] > nums[i + 3]) {
          cout << "c2" << endl;
          return false;
        }
      } else if (case3(nums[i], nums[i + 1], nums[i + 2]) ||
                 case4(nums[i], nums[i + 1], nums[i + 2]) ||
                 case5(nums[i], nums[i + 1], nums[i + 2])) {
        if (nums[i + 2] > nums[i + 3]) {
          cout << "c345" << endl;
          return false;
        }
      }
      return checkPossibility(nums, i + 2, count + 1);
    }
  }
};