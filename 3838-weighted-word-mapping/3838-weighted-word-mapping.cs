public class Solution {
    public string MapWordWeights(string[] words, int[] weights) {
        string s = "";
        string d = "zyxwvutsrqponmlkjihgfedcba";
        foreach(var word in words) {
            int sweight = 0;
            for(int i = 0; i < word.Length; i++) {
                int pos = (int)word[i] % 96;
                sweight += weights[pos - 1];
            }
            s += d[sweight%26];
        }
        return s;
    }
}