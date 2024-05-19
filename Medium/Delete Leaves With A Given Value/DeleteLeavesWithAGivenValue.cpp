// https://leetcode.com/problems/delete-leaves-with-a-given-value

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
  bool isTargetLeaf(TreeNode *node, int target) {
    return node->left == nullptr && node->right == nullptr &&
           node->val == target;
  }

  TreeNode *removeLeafNodes(TreeNode *root, int target) {
    if (!root) {
      return nullptr;
    }
    root->left = removeLeafNodes(root->left, target);

    root->right = removeLeafNodes(root->right, target);

    if (isTargetLeaf(root, target)) {
      return nullptr;
    } else {
      return root;
    }
  }
};