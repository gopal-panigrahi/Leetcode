// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet

/**
 * @param {string} s
 * @return {string[]}
 */
var cellsInRange = function (s) {
  let cells = [];
  let c1 = s[0],
    r1 = s[1],
    c2 = s[3],
    r2 = s[4];

  for (let i = c1; i <= c2; i = String.fromCharCode(i.charCodeAt() + 1)) {
    for (let j = r1; j <= r2; j++) {
      cells.push(i + j);
    }
  }
  return cells;
};
