// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int max_candy = *max_element(candies.begin(), candies.end());
    vector<bool> possibility_array;
    for (int candy : candies) {
      if ((max_candy - candy) <= extraCandies) {
        possibility_array.push_back(true);
      } else {
        possibility_array.push_back(false);
      }
    }
    return possibility_array;
  }
};