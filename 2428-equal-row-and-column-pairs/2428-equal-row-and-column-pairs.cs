public class Solution
{
    public int EqualPairs(int[][] grid)
    {
        int n = grid.Length;
        int count = 0;
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                bool flag = true;
                for (int k = 0; k < n; k++)
                {
                    if (grid[r][k] != grid[k][c])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    count++;
                }
            }
        }
        return count;
    }
}