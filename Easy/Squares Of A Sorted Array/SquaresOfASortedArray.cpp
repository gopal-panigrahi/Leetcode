// https://leetcode.com/problems/squares-of-a-sorted-array

class Solution {
public:
  vector<int> sortedSquares(vector<int> &A) {
    if (A.empty()) {
      return vector<int>();
    }
    vector<int> res(int(A.size()));
    int i = 0, j = (A.size() - 1), k = j;
    while (i <= j) {
      if (A[i] * A[i] < A[j] * A[j]) {
        res[k] = A[j] * A[j];
        j--;
      } else {
        res[k] = A[i] * A[i];
        i++;
      }
      k--;
    }

    return res;
  }
};