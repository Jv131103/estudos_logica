console.log("OBJETO NORMAL:");
let d1 = {a: 1};
let d2 = {b: 2};
let d3 = {...d1, ...d2}; // spread -> novo objeto
console.log(d1, d2, d3); // {a:1} {b:2} {a:1, b:2}

console.log("OBJETO IN-PLACE:");
d1 = {a: 1};
d2 = {b: 2};
Object.assign(d1, d2); // in-place
console.log(d1);       // {a:1, b:2}

console.log();

console.log("SET NORMAL:");
let s1 = new Set([1, 2]);
let s2 = new Set([2, 3]);
let s3 = new Set([...s1, ...s2]); // novo
console.log(s1, s2, s3);

console.log("SET IN-PLACE:");
s1 = new Set([1, 2]);
s2 = new Set([2, 3]);
for (let x of s2) s1.add(x); // in-place
console.log(s1); // Set {1, 2, 3}

