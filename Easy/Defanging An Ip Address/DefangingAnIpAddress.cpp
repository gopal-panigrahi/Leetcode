// https://leetcode.com/problems/defanging-an-ip-address

class Solution {
public:
  string defangIPaddr(string address) {
    string result = "";
    for (auto s : address) {
      if (s == '.') {
        result += "[.]";
      } else {
        result += s;
      }
    }
    return result;
  }
};