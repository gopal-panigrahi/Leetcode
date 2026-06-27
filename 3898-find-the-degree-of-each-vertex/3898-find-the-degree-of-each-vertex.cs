public class Solution {
    public int[] FindDegrees(int[][] matrix) {
        int[] degrees = new int[matrix.Length];
        for(int i = 0; i < matrix.Length; i++) {
            for(int j = i + 1; j < matrix[0].Length; j++) {
                if(matrix[i][j] == 1) {
                    degrees[i] += 1;
                    degrees[j] += 1;
                }
            }
        }
        return degrees;
    }
}