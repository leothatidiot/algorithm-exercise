/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
 var isIsomorphic = function(s, t) {
  var s2tM = []
  for (let i = 0; i < s.length; i++) {
    if (s2tM[s[i]] === undefined) {
      for (let ct in s2tM) {
        if (s2tM[ct] === t[i]) return false
      }
      s2tM[s[i]] = t[i]
    } else {
      if (s2tM[s[i]] !== t[i]) return false
    }
  }
  return true
};