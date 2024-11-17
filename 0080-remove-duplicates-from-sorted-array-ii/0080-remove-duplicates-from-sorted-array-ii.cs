public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int prev = 0, count = 1;
        for(int curr = 1; curr < nums.Length; curr++) {
            if(nums[prev] != nums[curr]) {
                nums[++prev] = nums[curr];
                count = 1;
            }
            else if(count < 2) {
                nums[++prev] = nums[curr];
                count++;
            }
        }
        return prev+1;
    }
}