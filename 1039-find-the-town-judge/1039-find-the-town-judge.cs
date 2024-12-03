public class Solution {
    public int FindJudge(int n, int[][] trust) {
        int[] degree_table  = new int[n];

        for(int i = 0; i < trust.Length; i++) {
            degree_table[trust[i][0]-1] -= 1;
            degree_table[trust[i][1]-1] += 1;
        }

        for(int i = 0; i < n; i++) {
            if(degree_table[i] == (n-1)) {
                return i+1;
            }
        }
        return -1;
    }
}