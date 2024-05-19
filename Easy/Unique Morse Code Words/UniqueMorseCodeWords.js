// https://leetcode.com/problems/unique-morse-code-words

/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function (words) {
  let transformations = new Set();
  let table = [
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",
  ];

  for (let w of words) {
    let t = "";
    for (let c of w) {
      t += table[c.charCodeAt(0) - 97];
    }
    transformations.add(t);
  }

  return transformations.size;
};
