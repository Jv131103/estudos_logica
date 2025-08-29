const prompt = require('prompt-sync')();

function versao1(){
    let lista = [];

    for (let i=0; i < 8; i++){
        let numero = parseInt(prompt());
        lista.push(numero);
    }

    let maior = lista[0];
    let maior_indice = 0;

    for (let i=0; i < lista.length; i++){
        if (lista[i] > maior){
            maior_indice = i;
            maior = lista[i];
        }
    }

    console.log(`max=${maior}; idx=${maior_indice}`);
}



function versao2(){
    let lista = [];

    for (let i=0; i < 8; i++){
        lista.push(parseInt(prompt()));
    }

    let maior = Math.max(...lista);
    let maior_indice = lista.indexOf(maior);

    console.log(`max=${maior}; idx=${maior_indice}`);
}


versao2();
