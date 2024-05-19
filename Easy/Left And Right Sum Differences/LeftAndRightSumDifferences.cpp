// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
  vector<int> leftRightDifference(vector<int> &nums) {
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    vector<int> answers(n, 0);

    int prev_left_sum = 0;
    int prev_right_sum = sum;

    for (int i = 0; i < n; i++) {
      int left_sum = prev_left_sum + nums[i];
      int right_sum = prev_right_sum - nums[i];

      answers[i] = abs(prev_left_sum - right_sum);

      prev_left_sum = left_sum;
      prev_right_sum = right_sum;
    }

    return answers;
  }
};