// https://leetcode.com/problems/number-of-longest-increasing-subsequence

class Solution {
public:
  int findNumberOfLIS(vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }

    int prev = 2;
    vector<int> subsequenceLength(nums.size(), 1), sameCount(nums.size(), 1);
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (nums[j] < nums[i]) {
          if (subsequenceLength[i] == (subsequenceLength[j] + 1)) {
            sameCount[i] += sameCount[j];
          } else {
            if (subsequenceLength[i] < (subsequenceLength[j] + 1)) {
              subsequenceLength[i] = subsequenceLength[j] + 1;
              sameCount[i] = sameCount[j];
            }
          }
        }
      }
    }

    int maxLength =
            *max_element(subsequenceLength.begin(), subsequenceLength.end()),
        sum = 0;
    for (int i = 0; i < sameCount.size(); i++) {
      if (subsequenceLength[i] == maxLength) {
        sum += sameCount[i];
      }
    }
    return sum;
  }
};