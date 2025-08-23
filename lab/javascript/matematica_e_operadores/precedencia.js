function calcular_expressao1(x, y, z){
    return x + y * z;
}


function calcular_expressao2(x, y, z){
    return (x + y) * z;
}


function verificar_se_expressao_e_verdadeira(x, y, z){
    if ((x > y) && (y < z)){
        return 1;
    }
    return 0;
}

const prompt = require('prompt-sync')();
let x = parseFloat(prompt("Digite o valor de x: "));
let y = parseFloat(prompt("Digite o valor de y: "));
let z = parseFloat(prompt("Digite o valor de z: "));

console.log(calcular_expressao1(x, y, z));
console.log(calcular_expressao2(x, y, z));
console.log(verificar_se_expressao_e_verdadeira(x, y, z));
