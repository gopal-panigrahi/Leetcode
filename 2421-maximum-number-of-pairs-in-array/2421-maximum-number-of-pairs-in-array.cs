public class Solution
{
    public int[] NumberOfPairs(int[] nums)
    {
        int[] answer = new int[2] { 0, 0 };
        var freq_table = new Dictionary<int, int>();

        foreach (var num in nums)
        {
            if (freq_table.ContainsKey(num))
            {
                freq_table[num]++;
            }
            else
            {
                freq_table[num] = 1;
            }
        }

        foreach (var p in freq_table)
        {
            answer[0] += p.Value / 2;
            answer[1] += p.Value % 2;
        }

        return answer;
    }
}