// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    vector<int> copy_nums(nums.size());
    copy(nums.begin(), nums.end(), copy_nums.begin());
    sort(nums.begin(), nums.end());
    vector<int> smallerThanCurrent;

    for (int num : copy_nums) {
      smallerThanCurrent.push_back(find(nums.begin(), nums.end(), num) -
                                   nums.begin());
    }

    return smallerThanCurrent;
  }
};