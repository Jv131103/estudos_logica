const prompt = require('prompt-sync')();

function filtrar_pares(numero){
    let entrada = prompt();
    let lista = entrada.split(" ").map(Number);

    if (lista.length !== numero){
        throw new Error(
            "Tamanho da lista precisa compadecer ao limite esperado"
        );
    }

    lista.forEach(element => {
        if (element % 2 == 0){
            process.stdout.write(element + " ");;
        }
    });
    console.log("");
}


let numero = Number(prompt())
filtrar_pares(numero)
