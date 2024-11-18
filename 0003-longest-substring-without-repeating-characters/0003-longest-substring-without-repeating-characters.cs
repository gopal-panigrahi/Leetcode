public class Solution {
    public int LengthOfLongestSubstring(string s) {
        Dictionary<char, bool> seen = new();
        int start = 0, maxLength = 0, currLen = 0;

        for(int i = 0; i < s.Length; i++) {
            if(seen.ContainsKey(s[i]) && seen[s[i]]) {
                while(s[start] != s[i]) {
                    seen[s[start]] = false;
                    start++;
                    currLen--;
                }
                seen[s[start]] = false;
                start++;
                currLen--;
            }
            seen[s[i]] = true;
            currLen++;

            if(maxLength < currLen) {
                maxLength = currLen;
            }
        }

        return maxLength;
    }
}