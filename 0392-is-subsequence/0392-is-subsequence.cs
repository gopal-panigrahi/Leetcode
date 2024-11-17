public class Solution {
    public bool IsSubsequence(string s, string t) {
        int s_index = 0, t_index = 0;
        if(s.Length > t.Length) {
            return false;
        }

        while(t_index < t.Length && s_index < s.Length) {
            if(t[t_index] == s[s_index]) {
                s_index++;
            }
            t_index++;
        }
        return s_index == s.Length;
    }
}