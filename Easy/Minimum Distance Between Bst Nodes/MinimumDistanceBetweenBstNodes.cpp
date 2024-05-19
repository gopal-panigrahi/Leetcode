// https://leetcode.com/problems/minimum-distance-between-bst-nodes

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  int diff, prev;
  int minDiffInBST(TreeNode *root) {
    diff = 0;
    prev = -1;
    inorder(root);
    return diff;
  }
  void inorder(TreeNode *root) {
    if (root != NULL) {
      inorder(root->left);
      if (prev != -1) {
        if (diff == 0) {
          diff = abs((root->val) - prev);
        } else {
          if (abs((root->val) - prev) < diff) {
            diff = abs((root->val) - prev);
          }
        }
      }
      prev = root->val;
      inorder(root->right);
    }
  }
};