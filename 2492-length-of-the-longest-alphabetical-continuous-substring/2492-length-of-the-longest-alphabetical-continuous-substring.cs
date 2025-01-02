public class Solution
{
    public int LongestContinuousSubstring(string s)
    {
        int maxLength = 1, length = 1;
        for (int i = 1; i < s.Length; i++)
        {
            int prev = (int)s[i - 1];
            int curr = (int)s[i];

            if ((curr - prev) == 1)
            {
                length++;
            }
            else
            {
                length = 1;
            }

            maxLength = Math.Max(maxLength, length);
        }
        return maxLength;
    }
}