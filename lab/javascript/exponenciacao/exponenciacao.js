function variante1(valor, expoente){
    let contador = 1;
    let resultado = 1;

    while (contador <= expoente){
        resultado *= valor;
        contador ++;
    }

    return resultado
}


function variante2(valor, expoente){
    return valor**expoente;
}


function variante3(base, expoente){
    let resultado = 1;
    
    while (expoente > 0){
        if (expoente % 2 == 1){
            resultado *= base;
        }
        base *= base;
        expoente /= 2;
    }

    return resultado;
}


const prompt = require('prompt-sync')();

let valor = parseInt(prompt("Digite a base: "));
let expoente = parseInt(prompt("Digite o expoente: "));

if (expoente < 0){
    console.log("Não lemos expoente negativo");
} else {
    let modelo1 = variante1(valor, expoente);
    console.log(`Modelo 1: ${modelo1}`);

    let modelo2 = variante1(valor, expoente);
    console.log(`Modelo 2: ${modelo2}`);

    let modelo3 = variante1(valor, expoente);
    console.log(`Modelo 3: ${modelo3}`);
}
