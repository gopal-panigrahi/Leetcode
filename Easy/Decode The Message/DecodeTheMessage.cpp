// https://leetcode.com/problems/decode-the-message

class Solution {
public:
  string decodeMessage(string key, string message) {
    unordered_map<char, char> sub_table;
    sub_table[' '] = ' ';
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int pos = 0;
    for (int i = 0; i < key.length(); i++) {
      if (!sub_table[key[i]]) {
        sub_table[key[i]] = alphabet[pos++];
      }
    }
    string decoded_text = "";
    for (char c : message) {
      decoded_text += sub_table[c];
    }
    return decoded_text;
  }
};