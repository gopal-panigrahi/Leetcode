public class Solution
{
    public void Rotate(int[] nums, int k)
    {
        k = k % nums.Length;
        int[] temp = new int[nums.Length];
        for (int i = 0; i < nums.Length; i++)
        {
            temp[(i + k) % nums.Length] = nums[i];
        }

        for (int i = 0; i < nums.Length; i++)
        {
            nums[i] = temp[i];
        }
    }
}