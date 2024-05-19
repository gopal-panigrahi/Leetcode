// https://leetcode.com/problems/range-sum-query-immutable

class NumArray {
public:
  vector<int> prefixarray;
  NumArray(vector<int> &nums) {
    prefixarray.assign(nums.size() + 1, 0);
    partial_sum(nums.begin(), nums.end(), ++prefixarray.begin());
  }

  int sumRange(int i, int j) { return prefixarray[j + 1] - prefixarray[i]; }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */