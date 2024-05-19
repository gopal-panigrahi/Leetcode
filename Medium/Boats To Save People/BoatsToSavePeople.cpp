// https://leetcode.com/problems/boats-to-save-people

class Solution {
public:
  int numRescueBoats(vector<int> &people, int limit) {
    sort(people.begin(), people.end());
    int lower = 0, upper = people.size() - 1;
    int count = 0;
    while (lower <= upper) {
      if ((people[lower] + people[upper]) <= limit) {
        lower++;
      }
      upper--;
      count++;
    }
    return count;
  }
};