public class Solution {
    public int[] Shuffle(int[] nums, int n) {
        int[] result = new int[nums.Length];
        int k = 0;

        for(int i = 0; i < n; i++) {
            result[k++] = nums[i];
            result[k++] = nums[i+n];
        }
        return result;
    }
}