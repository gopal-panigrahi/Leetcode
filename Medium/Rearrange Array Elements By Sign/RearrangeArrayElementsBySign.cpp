// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
  vector<int> rearrangeArray(vector<int> &nums) {
    vector<int> newArray(nums.size(), 0);
    int posInd = 0, negInd = 1;
    for (int num : nums) {
      if (num < 0) {
        newArray[negInd] = num;
        negInd += 2;
      } else {
        newArray[posInd] = num;
        posInd += 2;
      }
    }
    return newArray;
  }
};