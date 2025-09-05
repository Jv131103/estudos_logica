const prompt = require('prompt-sync')();

function maior_e_menor_em_uma_lista(){
    let limite = Number(prompt());

    let entrada = prompt();
    let lista = entrada.split(" ").map(Number);

    if (lista.length > limite || lista.length < limite){
        throw new Error(
            "Tamanho da lista precisa compadecer ao limite esperado"
        );
    }

    let maior = lista[0];
    let menor = lista[0];

    lista.forEach(element => {
        if (element > maior){
            maior = element;
        }

        if (element < menor){
            menor = element;
        }
    });

    console.log("Menor:", menor);
    console.log("Maior:", maior);
}

function maior_e_menor_em_uma_lista2(){
    let limite = Number(prompt());

    let entrada = prompt();
    let lista = entrada.split(" ").map(Number);

    if (lista.length > limite || lista.length < limite){
        throw new Error(
            "Tamanho da lista precisa compadecer ao limite esperado"
        );
    }

    console.log("Menor:", Math.min(...lista));
    console.log("Maior:", Math.max(...lista));
}

maior_e_menor_em_uma_lista2();
