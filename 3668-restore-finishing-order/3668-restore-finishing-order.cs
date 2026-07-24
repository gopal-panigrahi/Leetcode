public class Solution {
    public int[] RecoverOrder(int[] order, int[] friends) {
        Dictionary<int,bool> f = new Dictionary<int, bool>();
        for(int i = 0; i < friends.Length; i++) {
            f[friends[i]] = true;
        }

        int[] ans = new int[friends.Length];
        int j = 0;
        for(int i = 0; i < order.Length; i++) {
            if(f.ContainsKey(order[i])) {
                ans[j++] = order[i];
            } 
        }
        return ans;
    }
}