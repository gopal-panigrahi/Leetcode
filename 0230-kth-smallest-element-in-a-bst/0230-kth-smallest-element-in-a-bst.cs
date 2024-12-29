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
    Dictionary<int, int> _sizeOfTree;

    public Solution()
    {
        _sizeOfTree = new Dictionary<int, int>();
    }

    public int CalculateSubTreeSize(TreeNode root)
    {
        if (root == null)
        {
            return 0;
        }

        if (!_sizeOfTree.ContainsKey(root.val))
        {
            _sizeOfTree.Add(root.val, 1 + CalculateSubTreeSize(root.left) + CalculateSubTreeSize(root.right));
        }

        return _sizeOfTree[root.val];
    }

    public int KthSmallest(TreeNode root, int k)
    {
        int sizeOfLeftSubTree = CalculateSubTreeSize(root.left);

        if (sizeOfLeftSubTree == (k - 1))
        {
            return root.val;
        }
        else if (sizeOfLeftSubTree >= k)
        {
            return KthSmallest(root.left, k);
        }
        else
        {
            return KthSmallest(root.right, k - 1 - sizeOfLeftSubTree);
        }
    }
}