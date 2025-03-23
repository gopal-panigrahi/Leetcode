public class Solution {
    public bool RotateString(string s, string goal) {
        if(s.Length != goal.Length) {
            return false;
        }
        string result = s + s;
        return result.Contains(goal);
    }
}