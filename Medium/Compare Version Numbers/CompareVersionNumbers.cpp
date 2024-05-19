// https://leetcode.com/problems/compare-version-numbers

class Solution {
public:
  int compareVersion(string version1, string version2) {
    bool isRemaining = true;
    stringstream sv1(version1);
    stringstream sv2(version2);

    while (isRemaining) {
      string sSegmentA, sSegmentB;
      getline(sv1, sSegmentA, '.');
      getline(sv2, sSegmentB, '.');

      int iSegmentA = 0, iSegmentB = 0;

      if (sSegmentA != "") {
        iSegmentA = stoi(sSegmentA);
      }
      if (sSegmentB != "") {
        iSegmentB = stoi(sSegmentB);
      }

      if (iSegmentA != iSegmentB) {
        return iSegmentA < iSegmentB ? -1 : 1;
      }

      isRemaining = sSegmentA != "" || sSegmentB != "";
    }
    return 0;
  }
};