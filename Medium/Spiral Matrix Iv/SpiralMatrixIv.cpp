// https://leetcode.com/problems/spiral-matrix-iv

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  vector<vector<int>> spiralMatrix(int m, int n, ListNode *head) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);
    vector<vector<int>> mat(m, vector<int>(n, -1));
    int top = 0, left = 0, bottom = m - 1, right = n - 1;
    while (head) {
      for (int i = left; i <= right && head; i++) {
        mat[top][i] = head->val;
        head = head->next;
      }
      top++;

      for (int i = top; i <= bottom && head; i++) {
        mat[i][right] = head->val;
        head = head->next;
      }
      right--;

      for (int i = right; i >= left && head; i--) {
        mat[bottom][i] = head->val;
        head = head->next;
      }
      bottom--;

      for (int i = bottom; i >= top && head; i--) {
        mat[i][left] = head->val;
        head = head->next;
      }
      left++;
    }
    return mat;
  }
};