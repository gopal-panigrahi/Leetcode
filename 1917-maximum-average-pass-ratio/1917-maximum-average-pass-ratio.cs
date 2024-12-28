public class Solution
{
    public double FindGain(int[] x)
    {
        double num = (double)x[0];
        double den = (double)x[1];

        return ((num + 1) / (den + 1)) - (num / den);
    }

    public double MaxAverageRatio(int[][] classes, int extraStudents)
    {
        var pq = new PriorityQueue<int[], double>();

        foreach (int[] single_class in classes)
        {
            double gain = FindGain(single_class);
            pq.Enqueue(single_class, -gain);
        }

        while (extraStudents > 0)
        {
            int[] single_class = pq.Dequeue();

            single_class[0] += 1;
            single_class[1] += 1;

            double gain = FindGain(single_class);

            pq.Enqueue(single_class, -gain);
            extraStudents--;
        }

        double result = 0;
        while (pq.Count > 0)
        {
            int[] single_class = pq.Dequeue();
            result += (double)single_class[0] / (double)single_class[1];
        }
        return result / classes.Length;
    }
}