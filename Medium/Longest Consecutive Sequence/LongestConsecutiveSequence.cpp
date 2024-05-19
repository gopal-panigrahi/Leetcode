// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_map<int, bool> visited;
    int maxLength = 0;

    for (int num : nums) {
      visited[num] = true;
    }
    for (int num : nums) {
      if (visited[num]) {
        int len = 1;
        for (int i = num - 1; visited[i]; i--) {
          len++;
          visited[i] = false;
        }
        for (int i = num + 1; visited[i]; i++) {
          len++;
          visited[i] = false;
        }
        maxLength = max(maxLength, len);
      }
    }
    return maxLength;
  }
};