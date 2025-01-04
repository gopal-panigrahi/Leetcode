public class Solution
{
    public string CustomSortString(string order, string s)
    {
        var bucket = new int[26];

        for (int i = 0; i < s.Length; i++)
        {
            bucket[s[i] % 97]++;
        }
        var result = new StringBuilder();
        for (int i = 0; i < order.Length; i++)
        {
            for (int j = 0; j < bucket[order[i] % 97]; j++)
            {
                result.Append(order[i]);
            }
            bucket[order[i] % 97] = 0;
        }

        for (int i = 0; i < bucket.Length; i++)
        {
            for (int j = 0; j < bucket[i]; j++)
            {
                result.Append((char)(i + 97));
            }
        }
        return result.ToString();
    }
}