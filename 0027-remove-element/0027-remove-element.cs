public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int currIndex = 0;
        for(int i = 0; i < nums.Length; i++) {
            if(nums[i] != val) {
                nums[currIndex++] = nums[i];
            }
        }
        return currIndex;
    }
}