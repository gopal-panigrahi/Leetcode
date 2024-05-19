// https://leetcode.com/problems/largest-divisible-subset

class Solution {
public:
  vector<int> largestDivisibleSubset(vector<int> &nums) {
    if (nums.empty()) {
      return vector<int>();
    }
    sort(nums.begin(), nums.end());
    vector<int> countSubset(nums.size(), 1), parentlist(nums.size(), -1);
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (nums[i] % nums[j] == 0) {
          if (countSubset[i] < (countSubset[j] + 1)) {
            countSubset[i] = countSubset[j] + 1;
            parentlist[i] = j;
          }
        }
      }
    }

    int maxIndex = max_element(countSubset.begin(), countSubset.end()) -
                   countSubset.begin();

    vector<int> largestSubset;
    while (maxIndex != -1) {
      largestSubset.push_back(nums[maxIndex]);
      maxIndex = parentlist[maxIndex];
    }
    return largestSubset;
  }
};