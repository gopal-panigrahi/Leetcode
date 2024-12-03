public class Solution {
    public int FindCenter(int[][] edges) {
        int[] deg = new int[edges.Length+1];
        foreach(var e in edges) {
            deg[e[0]-1] += 1;
            deg[e[1]-1] += 1;
        }
        for(int i = 0; i < deg.Length; i++) {
            if(deg[i] == (deg.Length-1)) {
                return i+1;
            }
        }
        return -1;
    }
}