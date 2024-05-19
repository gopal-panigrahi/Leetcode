// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    map<int, int> ht1, ht2;
    for (int i : nums1) {
      ht1[i]++;
    }
    for (int i : nums2) {
      ht2[i]++;
    }
    vector<int> answer;
    for (auto i : ht1) {
      if (min(i.second, ht2[i.first]) > 0) {
        answer.push_back(i.first);
      }
    }
    return answer;
  }
};