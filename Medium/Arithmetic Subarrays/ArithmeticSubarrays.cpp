class Solution {
public:
  bool isArithmetic(vector<int> &nums, int l, int r) {
    vector<int> temp(r - l + 1);
    for (int i = 0; i < temp.size(); i++) {
      temp[i] = nums[l + i];
    }
    sort(temp.begin(), temp.end());
    int standard = temp[1] - temp[0];
    for (int i = 1; i < temp.size(); i++) {
      if (temp[i] - temp[i - 1] != standard) {
        return false;
      }
    }
    return true;
  }

  vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l,
                                        vector<int> &r) {
    vector<bool> result(l.size());
    for (int i = 0; i < l.size(); i++) {
      result[i] = isArithmetic(nums, l[i], r[i]);
    }
    return result;
  }
};