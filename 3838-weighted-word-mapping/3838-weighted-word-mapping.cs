public class Solution {
    public string MapWordWeights(string[] words, int[] weights) {
        var result = new StringBuilder();
        foreach(var word in words) {
            int total_weight = 0;
            for(int i = 0; i < word.Length; i++) {
                total_weight += weights[word[i] - 'a'];
            }
            result.Append((char)('z' - (total_weight%26)));
        }
        return result.ToString();
    }
}