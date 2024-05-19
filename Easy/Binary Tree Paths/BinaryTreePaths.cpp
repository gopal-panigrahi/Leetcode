// https://leetcode.com/problems/binary-tree-paths

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
  vector<string> binaryTreePaths(TreeNode *root) {
    vector<string> result;
    if (root->left == nullptr && root->right == nullptr) {
      result.push_back(to_string(root->val));
      return result;
    }
    if (root->left != nullptr) {
      vector<string> left = binaryTreePaths(root->left);
      for (auto path : left) {
        result.push_back(to_string(root->val) + "->" + path);
      }
    }
    if (root->right != nullptr) {
      vector<string> right = binaryTreePaths(root->right);
      for (auto path : right) {
        result.push_back(to_string(root->val) + "->" + path);
      }
    }
    return result;
  }
};