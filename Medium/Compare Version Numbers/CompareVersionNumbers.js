// https://leetcode.com/problems/compare-version-numbers

/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function (version1, version2) {
  let v1 = version1.split(".");
  let v2 = version2.split(".");
  let length = v1.length > v2.length ? v1.length : v2.length;
  for (let i = 0; i < length; i++) {
    let segment1 = parseInt(v1.at(i) ?? 0);
    let segment2 = parseInt(v2.at(i) ?? 0);
    if (segment1 != segment2) {
      return segment1 < segment2 ? -1 : 1;
    }
  }
  return 0;
};
