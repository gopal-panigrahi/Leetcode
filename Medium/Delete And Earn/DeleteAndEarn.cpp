// https://leetcode.com/problems/delete-and-earn

class Solution {
public:
  int deleteAndEarn(vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }

    int points[10010] = {0};

    for (int &i : nums) {
      points[i] += i;
    }

    int max_points = max(points[0], points[1]);
    int end = *max_element(nums.begin(), nums.end());
    for (int i = 2; i <= end; i++) {
      points[i] = max(points[i] + points[i - 2], points[i - 1]);
    }
    return points[end];
  }
};