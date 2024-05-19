// https://leetcode.com/problems/maximum-binary-tree

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
  TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
    return construct(nums, nums.begin(), nums.end());
  }

  TreeNode *construct(vector<int> &nums, auto start, auto end) {
    if (start == end) {
      return nullptr;
    }
    auto max_num = max_element(start, end);
    TreeNode *node = new TreeNode(*max_num);
    node->left = construct(nums, start, max_num);
    node->right = construct(nums, max_num + 1, end);
    return node;
  }
};