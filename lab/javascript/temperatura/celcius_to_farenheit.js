function celcius_to_farenheit(celcius){
    return celcius * 9/5 + 32;
}

const prompt = require('prompt-sync')();
let c = Number(prompt());
console.log(celcius_to_farenheit(c));
