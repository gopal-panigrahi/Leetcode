// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage

class Solution {
public:
  int c(string garbage_s, char type) {
    return count(garbage_s.begin(), garbage_s.end(), type);
  }

  int garbageCollection(vector<string> &garbage, vector<int> &travel) {
    int n = garbage.size();
    int total_time =
        c(garbage[0], 'P') + c(garbage[0], 'G') + c(garbage[0], 'M');
    int temp_p = 0, temp_g = 0, temp_m = 0;

    for (int i = 1; i < n; i++) {
      int paper = c(garbage[i], 'P');
      int glass = c(garbage[i], 'G');
      int metal = c(garbage[i], 'M');

      if (paper) {
        total_time += temp_p + paper + travel[i - 1];
        temp_p = 0;
      } else {
        temp_p += travel[i - 1];
      }

      if (glass) {
        total_time += temp_g + glass + travel[i - 1];
        temp_g = 0;
      } else {
        temp_g += travel[i - 1];
      }

      if (metal) {
        total_time += temp_m + metal + travel[i - 1];
        temp_m = 0;
      } else {
        temp_m += travel[i - 1];
      }
    }
    return total_time;
  }
};