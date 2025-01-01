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
    public int MinimumSwapsForSort(List<(int, int)> arr)
    {
        arr.Sort();

        int swaps = 0;
        for (int i = 0; i < arr.Count; i++)
        {
            var (value, pos) = arr[i];

            if (pos != i)
            {
                swaps++;
                (arr[pos], arr[i]) = (arr[i], arr[pos]);
                i--;
            }
        }

        return swaps;
    }

    public int MinimumOperations(TreeNode root)
    {
        var q = new Queue<TreeNode>();
        q.Enqueue(root);

        int minOps = 0;

        while (q.Count > 0)
        {
            var nodes = new List<(int, int)>();

            int sizeOfCurrLevel = q.Count;
            for (int i = 0; i < sizeOfCurrLevel; i++)
            {
                var node = q.Dequeue();
                nodes.Add((node.val, i));

                if (node.left is not null)
                {
                    q.Enqueue(node.left);
                }

                if (node.right is not null)
                {
                    q.Enqueue(node.right);
                }
            }

            minOps += MinimumSwapsForSort(nodes);
        }

        return minOps;
    }
}