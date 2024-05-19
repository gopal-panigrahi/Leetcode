// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
  int largestAltitude(vector<int> &gain) {
    int altitude = 0;
    int highest_altitude = 0;
    for (int g : gain) {
      altitude += g;
      if (altitude > highest_altitude) {
        highest_altitude = altitude;
      }
    }
    return highest_altitude;
  }
};