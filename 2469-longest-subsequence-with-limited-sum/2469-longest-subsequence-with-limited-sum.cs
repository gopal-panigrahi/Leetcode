public class Solution
{
    public int[] AnswerQueries(int[] nums, int[] queries)
    {
        Array.Sort(nums);

        int[] answers = new int[queries.Length];

        int[] prefix_sum = new int[nums.Length + 1];
        prefix_sum[0] = 0;

        for (int i = 0; i < nums.Length; i++)
        {
            prefix_sum[i + 1] = prefix_sum[i] + nums[i];
        }

        for (var i = 0; i < queries.Length; i++)
        {
            var result = Array.BinarySearch(prefix_sum, queries[i]);
            if (result < 0)
            {
                answers[i] = ~result - 1;
            }
            else
            {
                answers[i] = result;
            }
        }

        return answers;
    }
}