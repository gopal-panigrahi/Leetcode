public class Solution {
    public bool IsAlphaNumeric(char c) {
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'); 
    }

    public bool IsPalindrome(string inp) {
        string s = inp.ToLower();
        int begin = 0, end = s.Length - 1;
        while(begin < end) {
            if(IsAlphaNumeric(s[begin]) && IsAlphaNumeric(s[end])) {
                if(s[begin++] != s[end--]) {
                    return false;
                }
            } else if(IsAlphaNumeric(s[begin])) {
                end--;
            } else {
                begin++;
            }
        }
        return true;
    }
}