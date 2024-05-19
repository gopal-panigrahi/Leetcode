// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
  int maxArea(vector<int> &height) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    int maxArea = 0;
    int l = 0, h = height.size() - 1;

    while (l < h) {
      maxArea = max(maxArea, min(height[l], height[h]) * (h - l));
      if (height[l] < height[h]) {
        l++;
      } else {
        h--;
      }
    }
    return maxArea;
  }
};