public class Solution
{
    public int[] AnswerQueries(int[] nums, int[] queries)
    {
        Array.Sort(nums);

        int[] answers = new int[queries.Length];

        for (int i = 0; i < queries.Length; i++)
        {
            int len = 0, sum = 0;
            for (int j = 0; j < nums.Length; j++)
            {
                sum += nums[j];
                if (sum > queries[i])
                {
                    break;
                }
                len++;
            }

            answers[i] = len;
        }

        return answers;
    }
}