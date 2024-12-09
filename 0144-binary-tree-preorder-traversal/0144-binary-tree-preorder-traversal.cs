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
public class Solution {
    private List<int> _result;
    private void Traverse(TreeNode root) {
        if(root == null) {
            return;
        }
        _result.Add(root.val);
        Traverse(root.left);
        Traverse(root.right);
    }

    public IList<int> PreorderTraversal(TreeNode root) {
        _result = new List<int>();
        Traverse(root);
        return _result;
    }
}