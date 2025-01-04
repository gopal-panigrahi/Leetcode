public class Solution
{
    public int GetLucky(string s, int k)
    {
        var converted_s = new StringBuilder();
        foreach (char c in s)
        {
            converted_s.Append(((int)c) - 96);
        }
        while (k > 0)
        {
            int result = 0;
            foreach (var c in converted_s.ToString())
            {
                result += ((int)c) - 48;
            }
            converted_s.Clear();
            converted_s.Append(result);
            k--;
        }
        return Convert.ToInt32(converted_s.ToString());
    }
}