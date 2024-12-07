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
    List<int> _list = new List<int>();

    public void Traverse(TreeNode root) {
        if(root != null) {
            Traverse(root.left);
            Traverse(root.right);
            _list.Add(root.val);
        }
    }

    public IList<int> PostorderTraversal(TreeNode root) {
        Traverse(root);
        return _list;
    }
}