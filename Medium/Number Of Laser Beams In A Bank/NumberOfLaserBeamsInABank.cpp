// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
  int countDevices(string floor) {
    int count = 0;
    for (int i = 0; i < floor.length(); i++) {
      if (floor[i] == '1') {
        count++;
      }
    }
    return count;
  }

  int numberOfBeams(vector<string> &bank) {
    int prevFloorDevices = 0;
    int totalBeams = 0;
    for (int i = 0; i < bank.size(); i++) {
      int currentFloorDevices = countDevices(bank[i]);
      if (currentFloorDevices) {
        totalBeams += prevFloorDevices * currentFloorDevices;
        prevFloorDevices = currentFloorDevices;
      }
    }
    return totalBeams;
  }
};