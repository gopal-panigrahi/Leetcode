public class Solution
{
    public int FindLucky(int[] arr)
    {
        int[] freq_table = new int[500];

        foreach (var num in arr)
        {
            freq_table[num-1]++;
        }
        for(int i = 499; i >= 0; i--) {
            if(freq_table[i] == i+1) {
                return i+1;
            }
        }
        return -1;
    }
}