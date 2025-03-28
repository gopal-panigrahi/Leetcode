public class Solution {
    public void ReverseString(char[] s) {
        int b = 0, e = s.Length - 1;
        while(b < e) {
            char temp = s[b];
            s[b] = s[e];
            s[e] = temp;
            e--;
            b++;
        }
    }
}