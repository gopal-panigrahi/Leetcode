public class Solution {
    public bool RotateString(string s, string goal) {
        if(s.Length != goal.Length) {
            return false;
        }
        for(int i = 0; i < s.Length; i++) {
            bool flag = true;
            int k = i;
            for(int j = 0; j < goal.Length; j++) {
                if(s[k%s.Length] != goal[j]) {
                    flag = false;
                    break;
                }
                k++;
            }
            if(flag) {
                return true;
            }
        }        
        return false;
    }
}