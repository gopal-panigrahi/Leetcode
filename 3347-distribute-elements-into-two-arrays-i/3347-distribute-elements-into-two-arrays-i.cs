public class Solution
{
    public int[] ResultArray(int[] nums)
    {
        var result = new int[nums.Length];

        int start = 0, end = nums.Length - 1;

        result[start++] = nums[0];
        result[end--] = nums[1];

        for (int i = 2; i < nums.Length; i++)
        {
            if (result[start - 1] > result[end + 1])
            {
                result[start++] = nums[i];
            }
            else
            {
                result[end--] = nums[i];
            }
        }

        Array.Reverse(result, start, result.Length - start);

        return result;
    }
}