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

    int count = 0, result;

    public int KthSmallest(TreeNode root, int k)
    {
        if (root == null)
        {
            return -1;
        }
        KthSmallest(root.left, k);
        count++;
        if (count == k)
        {
            this.result = root.val;
        }
        KthSmallest(root.right, k);

        return this.result;
    }
}