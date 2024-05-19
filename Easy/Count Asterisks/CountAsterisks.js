// https://leetcode.com/problems/count-asterisks

/**
 * @param {string} s
 * @return {number}
 */
var countAsterisks = function (s) {
  let sep = 0,
    count = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] == "|") {
      sep++;
    }
    if (sep % 2 == 0 && s[i] == "*") {
      count++;
    }
  }
  return count;
};
