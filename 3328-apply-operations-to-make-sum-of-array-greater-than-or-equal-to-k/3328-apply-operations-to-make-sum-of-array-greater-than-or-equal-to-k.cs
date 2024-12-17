public class Solution
{
    public int MinOperations(int k)
    {
        double limit = Math.Floor(Math.Sqrt(k));
        return (int)(Math.Ceiling(k / limit) + limit - 2.0);
    }
}