// https://leetcode.com/problems/unique-morse-code-words

class Solution {
public:
  int uniqueMorseRepresentations(vector<string> &words) {
    ios::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    vector<string> table{".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                         "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                         "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                         "...-", ".--",  "-..-", "-.--", "--.."};

    int size = words.size();
    unordered_set<string> transformations;
    for (int i = 0; i < size; i++) {
      string t = "";
      for (char c : words[i]) {
        t += table[c - 'a'];
      }
      transformations.insert(t);
    }
    return transformations.size();
  }
};