// https://leetcode.com/problems/distribute-coins-in-binary-tree

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
  int steps;

public:
  Solution() { steps = 0; }

  int propagate(TreeNode *node) {
    if (!node) {
      return 0;
    }

    int coinsToLeft = propagate(node->left);
    int coinsToRight = propagate(node->right);

    steps += abs(coinsToLeft) + abs(coinsToRight);
    return coinsToLeft + coinsToRight + (node->val == 0 ? -1 : node->val - 1);
  }

  int distributeCoins(TreeNode *root) {
    propagate(root);
    return steps;
  }
};