public class Solution
{
    public List<int> SplitIntoDigits(int num)
    {
        var l = new List<int>();
        while (num > 0)
        {
            l.Add(num % 10);
            num /= 10;
        }
        l.Reverse();
        return l;
    }

    public Stack<(int, int)> GenerateMonotonicStack(List<int> digits)
    {
        var stk = new Stack<(int, int)>();

        for (int i = digits.Count - 1; i >= 0; i--)
        {
            if (stk.Count == 0)
            {
                stk.Push((digits[i], i));
            }
            else
            {
                var (e, _) = stk.Peek();
                if (digits[i] >= e)
                {
                    stk.Push((digits[i], i));
                }
            }
        }
        return stk;
    }

    public List<int> SwapToMakeItMaximum(Stack<(int, int)> stk, List<int> digits)
    {
        for (int i = 0; i < digits.Count; i++)
        {
            if (stk.Count > 0)
            {
                var (e, p) = stk.Peek();
                if (digits[i] == e)
                {
                    stk.Pop();
                }
                else if (digits[i] < e)
                {
                    stk.Pop();
                    while (stk.Count > 0)
                    {
                        var (te, tp) = stk.Peek();
                        if (te != e)
                        {
                            break;
                        }
                        p = tp;
                        stk.Pop();
                    }

                    (digits[i], digits[p]) = (digits[p], digits[i]);
                    break;
                }
            }
        }
        return digits;
    }

    public int MaximumSwap(int num)
    {
        var digits = SplitIntoDigits(num);
        var pq = GenerateMonotonicStack(digits);
        digits = SwapToMakeItMaximum(pq, digits);

        return Convert.ToInt32(string.Join(string.Empty, digits));
    }
}