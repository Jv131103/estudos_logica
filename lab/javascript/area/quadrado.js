function area_retangulo(base, altura){
    return base * altura;
}


const prompt = require('prompt-sync')();

let [v1, v2] = prompt().split(" ").map(Number);
console.log(area_retangulo(v1, v2));
