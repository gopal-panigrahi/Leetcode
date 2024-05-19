// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> ht;
    vector<int> intersection;
    for (int i : nums1) {
      ht[i]++;
    }
    for (int i : nums2) {
      if (ht[i] > 0) {
        intersection.push_back(i);
        ht[i]--;
      }
    }
    return intersection;
  }
};