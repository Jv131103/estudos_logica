function isAnagram(s1, s2) {
  if (s1.length !== s2.length) return false;
  const freq = Object.create(null);

  for (const ch of s1) {
    freq[ch] = (freq[ch] || 0) + 1;
  }
  for (const ch of s2) {
    if (!freq[ch]) return false;
    if (--freq[ch] === 0) delete freq[ch];
  }
  return Object.keys(freq).length === 0;
}

console.log(isAnagram("amor", "roma"));
console.log(isAnagram("casa", "caso"));
