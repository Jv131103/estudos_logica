function tabuada_de_um_numero(numero, limite=10){
    for (let valor=1; valor <= limite; valor++){
        console.log(`${numero} x ${valor} = ${numero * valor}`);
    }
}


function tabuada_de_um_numero2(numero, limite=10){
    let valor = 1

    while (valor <= limite){
        console.log(`${numero} x ${valor} = ${numero * valor}`);
        valor++;
    }
}


const prompt = require('prompt-sync')();
let numero = Number(prompt());
tabuada_de_um_numero(numero)
console.log("");
numero = Number(prompt());
tabuada_de_um_numero2(numero);
