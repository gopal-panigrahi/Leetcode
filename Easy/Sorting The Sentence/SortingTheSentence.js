// https://leetcode.com/problems/sorting-the-sentence

/**
 * @param {string} s
 * @return {string}
 */
var sortSentence = function (s) {
  let words = s.split(" ");
  let sortedWords = [];
  for (let w of words) {
    let pos = parseInt(w.at(-1));
    sortedWords[pos - 1] = w.substr(0, w.length - 1);
  }
  return sortedWords.join(" ");
};
