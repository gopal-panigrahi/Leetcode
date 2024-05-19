// https://leetcode.com/problems/reverse-prefix-of-word

/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function (word, ch) {
  let index = word.indexOf(ch) + 1;
  return reverseFn(word, index) + word.slice(index);
};

function reverseFn(word, end) {
  return word.slice(0, end).split("").reverse().join("");
}
