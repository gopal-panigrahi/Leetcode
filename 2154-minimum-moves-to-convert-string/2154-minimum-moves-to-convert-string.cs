public class Solution
{
    public int MinimumMoves(string s)
    {
        int moves = 0;
        for (int idx = 0; idx < s.Length; idx++)
        {
            if (s[idx] == 'X')
            {
                idx += 2;
                moves++;
            }
        }
        return moves;
    }
}