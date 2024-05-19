// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
public:
  string makeKey(int a, int b, int c) {
    return to_string(a) + "|" + to_string(b) + "|" + to_string(c);
  }

  int arithmeticTriplets(vector<int> &nums, int diff) {
    int n = nums.size();
    unordered_map<string, int> triplets;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[j] - nums[i] == diff) {
          int k = diff + nums[j];
          string key = makeKey(nums[i], nums[j], k);
          triplets[key] += 1;

          k = nums[i] - diff;
          key = makeKey(k, nums[i], nums[j]);
          triplets[key] += 1;
        }
      }
    }
    int count = 0;
    for (auto t : triplets) {
      if (t.second > 1) {
        count++;
      }
    }

    return count;
  }
};