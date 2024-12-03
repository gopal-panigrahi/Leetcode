public class Solution {
    public int FindJudge(int n, int[][] trust) {
        int[,] degree_table  = new int[2,n];

        for(int i = 0; i < trust.Length; i++) {
            degree_table[0,trust[i][0]-1] += 1;
            degree_table[1,trust[i][1]-1] += 1;
        }

        for(int i = 0; i < n; i++) {
            if(degree_table[0,i] == 0 && degree_table[1,i] == (n-1)) {
                return i+1;
            }
        }
        return -1;
    }
}