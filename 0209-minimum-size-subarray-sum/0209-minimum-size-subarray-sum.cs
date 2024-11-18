public class Solution {
    public int MinSubArrayLen(int target, int[] nums) {
        int minLength = Int32.MaxValue, currSum = 0, start = 0, pos = 0;
        
        do {
            if(currSum < target && pos < nums.Length) {
                currSum += nums[pos++];
            } else if(currSum >= target) {
                currSum -= nums[start++];
            } else {
                break;
            }

            if(currSum >= target && (pos - start) < minLength) {
                minLength = pos - start;
            }
        } while(start <= pos);

        return minLength == Int32.MaxValue ? 0 : minLength;
    }
}