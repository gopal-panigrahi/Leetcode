public class Solution {
    public int AlternatingSum(int[] nums) {
        int even_sum = 0, odd_sum = 0;
        for(int i = 0; i < nums.Length; i+=2) {
            even_sum += nums[i];
        }
        for(int i = 1; i < nums.Length; i+=2) {
            odd_sum += nums[i];
        }
        return even_sum - odd_sum;
    }
}