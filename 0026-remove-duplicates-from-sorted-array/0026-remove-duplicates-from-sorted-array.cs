
public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int currIndex = 0;
        for(int i = 1; i < nums.Length; i++) {
            if(nums[currIndex] != nums[i]) {
                nums[++currIndex] = nums[i];
            }
        }
        return currIndex+1;
    }
}