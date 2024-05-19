// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions

class Solution {
public:
  vector<vector<int>> findMatrix(vector<int> &nums) {
    unordered_map<int, int> frequency_counter;
    int rows = 0;
    for (int num : nums) {
      frequency_counter[num]++;
      if (rows < frequency_counter[num]) {
        rows = frequency_counter[num];
      }
    }

    vector<vector<int>> result(rows);

    for (auto frequency : frequency_counter) {
      for (int i = 0; i < frequency.second; i++) {
        result[i].push_back(frequency.first);
      }
    }
    return result;
  }
};