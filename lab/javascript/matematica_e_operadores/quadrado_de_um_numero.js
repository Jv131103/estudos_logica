function quadrado(n){
    return Math.pow(n, 2);
}


function quadrado2(n){
    return n**2;
}


function quadrado3(n){
    return n * n;
}


const prompt = require('prompt-sync')();
let n = Number(prompt());
console.log(quadrado(n));
console.log(quadrado2(n));
console.log(quadrado3(n));
