let a = 5;
let b = 10;
console.log("Antes:", a, b);

// usando temp
let temp = a;
a = b;
b = temp;
console.log("Depois (com temp):", a, b);

// Jstonic (sem temp)
[a, b] = [b, a];
console.log("Depois (Pythonic):", a, b);
