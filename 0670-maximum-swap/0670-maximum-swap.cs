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

    public PriorityQueue<(int, int), (int, int)> GenerateMaximalQueue(List<int> digits)
    {
        var pq = new PriorityQueue<(int, int), (int, int)>();

        for (int i = digits.Count - 1; i >= 0; i--)
        {
            if (pq.Count == 0)
            {
                pq.Enqueue((digits[i], i), (-digits[i], -i));
            }
            else
            {
                var (e, _) = pq.Peek();
                if (digits[i] >= e)
                {
                    pq.Enqueue((digits[i], i), (-digits[i], -i));
                }
            }
        }
        return pq;
    }

    public int MaximumSwap(int num)
    {
        var digits = SplitIntoDigits(num);
        var pq = GenerateMaximalQueue(digits);

        for (int i = 0; i < digits.Count; i++)
        {
            if (pq.Count > 0)
            {
                var (e, p) = pq.Peek();
                if (digits[i] == e)
                {
                    var temp = new List<((int, int), (int, int))>();

                    foreach (var item in pq.UnorderedItems)
                    {
                        var ((_, r), _) = item;
                        if (r != i)
                        {
                            temp.Add(item);
                        }
                    }
                    pq = new PriorityQueue<(int, int), (int, int)>(temp);
                }
                else if (digits[i] < e)
                {
                    (digits[i], digits[p]) = (digits[p], digits[i]);
                    break;
                }
            }
        }

        return Convert.ToInt32(string.Join(string.Empty, digits));
    }
}