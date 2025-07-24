const prompt = require('prompt-sync')();

function retornar_soma_gaus(n){
    return (n / 2) * (1 + n);
}


function retornar_modelo_pa(n){
    return n * (n + 1) / 2;
}


function main_modelo1(){
    let valor = parseInt(prompt("Digite um número: "));
    let soma = parseInt(retornar_soma_gaus(valor));
    console.log(`A soma é ${soma}`);
}


function main_modelo2(){
    let valor = parseInt(prompt("Digite um número: "));
    let contador = 0;
    let soma = 0;

    while (contador <= valor){
        soma += contador;
        contador ++;
    }

    console.log(`A soma é ${soma}`);
}


function main_modelo3(){
    let valor = parseInt(prompt("Digite um número: "));
    let soma = parseInt(retornar_modelo_pa(valor));
    console.log(`A soma é ${soma}`);
}


main_modelo1()
main_modelo2()
main_modelo3()
