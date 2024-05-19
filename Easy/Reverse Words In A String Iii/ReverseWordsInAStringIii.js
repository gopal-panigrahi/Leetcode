// https://leetcode.com/problems/reverse-words-in-a-string-iii

/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
  return s.split(" ").map(reverseString).join(" ");
};

function reverseString(s) {
  return s.split("").reverse().join("");
}
