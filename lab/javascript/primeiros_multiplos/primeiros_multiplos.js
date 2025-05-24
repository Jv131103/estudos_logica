function primeiros_multiplos(n, i, j){
    console.log(`Primeiros ${n} múltiplos de ${i} e ${j}`);

    let cont = 0;  // Contador de múltiplos impressos
    let mult = 0;  // Candidato a multiplo de i ou j

    while (cont < n){
        if (mult % i == 0 | mult % j == 0){
            console.log(mult);
            cont ++
        }

        mult ++;
    }
}


function primeiros_multiplos2(n, i, j){
    console.log(`Primeiros ${n} múltiplos de ${i} e ${j}`);

    // mult_i armazena um múltiplo de i
    // mult_j armazena um
    let mult_i, mult_j;

    mult_i = 0;
    mult_j = 0;

    for (let k=0; k < n; k++){
        // selecione o menor múltiplo, imprima e passe para o próximo
        if (mult_i == mult_j){
            console.log(mult_i);
            mult_i = mult_i + i;  // próximo múltiplo de i
            mult_j = mult_j + j;  // próximo múltiplo de j
        } else if (mult_i < mult_j){
            console.log(mult_i);
            mult_i = mult_i + i;  // próximo múltiplo de i
        } else {
            console.log(mult_j);
            mult_j = mult_j + j;  // próximo múltiplo de j
        }
    }
}


const prompt = require('prompt-sync')();

let n = parseInt(prompt("Digite o limite: "));
let i = parseInt(prompt("Digite o primeiro número: "));
let j = parseInt(prompt("Digite o segundo número: "));

primeiros_multiplos(n, i, j);
primeiros_multiplos2(n, i, j);
