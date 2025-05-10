const prompt = require('prompt-sync')();

function gerar_lista(){

    let limite;

    while (true){
        limite = parseInt(prompt("Tamanho da lista: "));
        if (isNaN(limite)){
            console.log("Digite um número inteiro válido");
        } else {
            break;
        }
    }

    let lista = [];
    let n;

    for (let i=0; i < limite; i++){
        while (true){
            n = Number(prompt("Digite um número: "));
            if (isNaN(n)){
                console.log("Digite um número inteiro válido");
            } else {
                break;
            }
        }
        lista.push(n);
    }

    return lista;
}

function soma_pares(iteravel){
    let soma = 0;

    iteravel.forEach(element => {
        if (element % 2 == 0) {
            soma += element;
        }
    });

    return soma;
}

let lista_somar_pares = gerar_lista();
console.log(`Resultado: ${soma_pares(lista_somar_pares)}`)
