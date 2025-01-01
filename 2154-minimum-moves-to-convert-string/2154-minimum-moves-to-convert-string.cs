public class Solution
{
    public int MinimumMoves(string s)
    {
        int start = 0, moves = 0;
        while (start < s.Length)
        {
            if (s[start] == 'X')
            {
                start += 3;
                moves++;
            }
            else
            {
                start++;
            }
        }
        return moves;
    }
}