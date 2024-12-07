public class Solution {
    public int FurthestDistanceFromOrigin(string moves) {
        int countL = 0, countR = 0, count_ = 0;
        foreach(char m in moves) {
            if(m == 'L') {
                countL++;
            } else if(m == 'R') {
                countR++;
            } else {
                count_++;
            }
        }

        return Math.Max(countL+count_-countR, countR+count_-countL);
    }
}