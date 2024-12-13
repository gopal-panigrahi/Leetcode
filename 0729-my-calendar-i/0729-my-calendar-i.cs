public class MyCalendar
{
    public class TreeNode
    {
        public int startTime, endTime;
        public TreeNode left, right;

        public TreeNode(int _startTime, int _endTime)
        {
            startTime = _startTime;
            endTime = _endTime;
            left = null;
            right = null;
        }
    }

    TreeNode _root = null;

    public MyCalendar()
    {
        _root = new TreeNode(0, 0);
    }

    public bool Insert(TreeNode root, TreeNode node)
    {
        if (root.endTime <= node.startTime)
        {
            if (root.right == null)
            {
                root.right = node;
                return true;
            }
            else
            {
                return Insert(root.right, node);
            }
        }
        else if (node.endTime <= root.startTime)
        {
            if (root.left == null)
            {
                root.left = node;
                return true;
            }
            else
            {
                return Insert(root.left, node);
            }
        }
        else
        {
            return false;
        }
    }

    public bool Book(int startTime, int endTime)
    {
        return Insert(_root, new TreeNode(startTime, endTime));
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * bool param_1 = obj.Book(startTime,endTime);
 */