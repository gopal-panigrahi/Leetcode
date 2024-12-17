public class Solution
{
    public int MinOperations(int k)
    {
        double limit = Math.Floor(Math.Sqrt(k));
        int minOps = Int32.MaxValue;

        for (double i = limit; i > 0; i--)
        {
            double ops = Math.Ceiling(k / i) + i - 2.0;
            minOps = Math.Min(minOps, (int)ops);
        }

        return minOps;
    }
}