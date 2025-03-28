public class Solution {
    public int MajorityElement(int[] nums) {
        var freq = new Dictionary<int, int>();

        int maxFreq = 0, element = -1;
        for(int i = 0; i < nums.Length; i++) {
            if(!freq.ContainsKey(nums[i])) {
                freq[nums[i]] = 0;
            }
            freq[nums[i]]++;
            if(maxFreq < freq[nums[i]]) {
                maxFreq = freq[nums[i]];
                element = nums[i];
            }
        }

        return element; 
    }
}