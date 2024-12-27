public class Solution
{
    public bool UniqueOccurrences(int[] arr)
    {
        var freq_table = new Dictionary<int, int>();
        var uniq_table = new Dictionary<int, bool>();

        foreach (int ele in arr)
        {
            if (freq_table.ContainsKey(ele))
            {
                freq_table[ele]++;
            }
            else
            {
                freq_table.Add(ele, 1);
            }
        }

        foreach (int ele in freq_table.Values)
        {
            if (uniq_table.ContainsKey(ele))
            {
                return false;
            }
            else
            {
                uniq_table.Add(ele, true);
            }
        }

        return true;
    }
}