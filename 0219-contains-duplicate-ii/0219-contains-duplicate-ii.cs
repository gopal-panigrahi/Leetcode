public class Solution
{
    public bool ContainsNearbyDuplicate(int[] nums, int k)
    {
        var locationTracker = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            int location;
            if (locationTracker.TryGetValue(nums[i], out location))
            {
                if (i - location <= k)
                {
                    return true;
                }
                else
                {
                    locationTracker[nums[i]] = i;
                }
            }
            else
            {
                locationTracker.Add(nums[i], i);
            }
        }
        return false;
    }
}