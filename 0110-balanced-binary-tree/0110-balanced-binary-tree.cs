/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution
{
    public bool IsBalancedTree;

    public int TreeHeight(TreeNode root)
    {
        if (!IsBalancedTree)
        {
            return -1;
        }

        if (root == null)
        {
            return 0;
        }

        int left = TreeHeight(root.left);
        int right = TreeHeight(root.right);

        this.IsBalancedTree &= Math.Abs(left - right) <= 1;

        return 1 + Math.Max(left, right);
    }

    public bool IsBalanced(TreeNode root)
    {
        this.IsBalancedTree = true;

        TreeHeight(root);

        return this.IsBalancedTree;
    }
}