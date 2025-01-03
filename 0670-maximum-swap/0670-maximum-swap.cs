public class Solution
{
    public int MaximumSwap(int num)
    {
        var digits = new StringBuilder(num.ToString());
        int left = -1, right = -1, max = digits.Length - 1;

        for (int i = digits.Length - 1; i >= 0; i--)
        {
            if (digits[i] > digits[max])
            {
                max = i;
                continue;
            }

            if (digits[i] < digits[max])
            {
                left = i;
                right = max;
            }
        }

        if (left == -1)
        {
            return num;
        }

        (digits[left], digits[right]) = (digits[right], digits[left]);

        return Convert.ToInt32(digits.ToString());
    }
}