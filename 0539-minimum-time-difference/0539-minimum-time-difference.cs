public class Solution
{
    public int GetMinutes(string time)
    {
        string hh, mm;

        hh = time.Split(':')[0];
        mm = time.Split(':')[1];



        return (Convert.ToInt32(hh) * 60) + Convert.ToInt32(mm);
    }

    public int FindMinDifference(IList<string> timePoints)
    {
        int minMinutes = Int32.MaxValue;

        timePoints = timePoints.OrderBy((x) => GetMinutes(x)).Select((x) => $"{GetMinutes(x)}").ToList();
        timePoints.Add($"{Convert.ToInt32(timePoints[0]) + 1440}");

        for (int i = 1; i < timePoints.Count; i++)
        {
            int smaller = Convert.ToInt32(timePoints[i - 1]);
            int larger = Convert.ToInt32(timePoints[i]);

            int diff1 = Math.Abs(smaller - larger);
            int diff2 = Math.Abs(smaller + 1440 - larger);

            minMinutes = Math.Min(minMinutes, Math.Min(diff1, diff2));
        }

        return minMinutes;
    }
}