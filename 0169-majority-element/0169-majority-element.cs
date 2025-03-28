public class Solution {
    public int MajorityElement(int[] nums) {
        int element = nums[0], freq = 1;
        for(int i = 1; i < nums.Length; i++) {
            if(freq == 0) {
                element = nums[i];
            }
            if(nums[i] == element) {
                freq++;
            } else {
                freq--;
            }
        }
        freq = 0;
        for(int i = 0; i < nums.Length; i++) {
            if(nums[i] == element) {
                freq++;
            }
        }

        return element;
    }
}