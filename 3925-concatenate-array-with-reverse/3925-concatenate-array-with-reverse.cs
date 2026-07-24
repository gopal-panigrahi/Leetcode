public class Solution {
    public int[] ConcatWithReverse(int[] nums) {
        int n = 2*nums.Length;
        int[] ans = new int[n];
        for(int i = 0; i < nums.Length; i++) {
            ans[i] = nums[i];
            ans[n - i - 1] = nums[i];
        }
        return ans;
    }
}