
public class Solution {
    public int RemoveDuplicates(int[] nums) {
        Dictionary<int, bool> seen = new Dictionary<int, bool>();
        int currIndex = 0;
        for(int i = 0; i < nums.Length; i++) {
            if(!seen.ContainsKey(nums[i])) {
                nums[currIndex++] = nums[i]; 
                seen[nums[i]] = true;
            }
        }
        return currIndex;
    }
}