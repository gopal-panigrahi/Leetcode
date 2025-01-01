public class Solution
{
    public int MinimumMoves(string s)
    {
        int idx = 0, moves = 0;
        while (idx < s.Length)
        {
            if (s[idx++] == 'X')
            {
                idx += 2;
                moves++;
            }
        }
        return moves;
    }
}