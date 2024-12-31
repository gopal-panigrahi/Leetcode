public class Solution
{
    public int ConvertToMinutes(string time)
    {
        string hh, mm;

        hh = time.Split(':')[0];
        mm = time.Split(':')[1];

        return (Convert.ToInt32(hh) * 60) + Convert.ToInt32(mm);
    }

    public int FindMinDifference(IList<string> timePoints)
    {
        int minDiff = Int32.MaxValue;

        bool[] seen = new bool[1440];

        foreach (var time in timePoints)
        {
            if (seen[ConvertToMinutes(time)])
            {
                return 0;
            }
            seen[ConvertToMinutes(time)] = true;
        }

        for (int curr = 0; curr < 1440; curr++)
        {
            if (seen[curr] == true)
            {

                int next = curr + 1;
                while (!seen[next % 1440])
                {
                    next++;
                }

                minDiff = Math.Min(minDiff, Math.Min(Math.Abs(curr - next), Math.Abs(curr + 1440 - next)));
            }
        }

        return minDiff;
    }
}