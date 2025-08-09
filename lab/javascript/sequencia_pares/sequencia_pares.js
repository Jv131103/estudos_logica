const prompt = require('prompt-sync')();

function sequencia(sequencia, numeros){
    let cont = 1;

    let i = 0;
    let soma = 0;

    while(cont <= sequencia){
        if (numeros[i] == 0){
            console.log(`SOMA ${soma}`);
            cont ++;
            soma = 0;
        } else{
            if (numeros[i] % 2 == 0){
                soma += numeros[i];
            } 
        }
        i++;
    }
}


function sequencia2(sequencia){
    let cont = 0;
    let lista_final = [];

    while(cont < sequencia){
        let lista_inicial = [];
        try{
            let numero = parseInt(
                prompt(`Digite um número: [0 encerra a sequencia ${cont+1}] `)
            );

            while(numero !== 0){
                lista_inicial.push(numero);
                numero = parseInt(
                    prompt(`Digite um número: [0 encerra a sequencia ${cont+1}] `)
                );
            }
            
            lista_final.push(lista_inicial);
            cont++;
        } catch (erro){
            console.error("DIGITE APENAS NÚMEROS INTEIROS");
        }
    }

    lista_final.forEach(lista => {
        let soma = 0;
        lista.forEach(valores => {
            if (valores % 2 == 0){
                soma += valores;
            }
        })
        console.log(`SOMA: ${soma}`);     
    });
}


function sequenciaJS(sequencias) {
  let listaFinal = [];
  let cont = 0;

  while (cont < sequencias) {
    let listaInicial = [];
    try {
      let numero = parseInt(prompt(`Digite um número: [0 encerra a sequência ${cont + 1}] `));

      while (numero !== 0 && !isNaN(numero)) {
        listaInicial.push(numero);
        numero = parseInt(prompt(`Digite um número: [0 encerra a sequência ${cont + 1}] `));
      }

      if (isNaN(numero)) {
        throw new Error("DIGITE APENAS NÚMEROS INTEIROS");
      }

      listaFinal.push(listaInicial);
      cont++;

    } catch (erro) {
      alert(erro.message);
    }
  }

  listaFinal.forEach((lista, i) => {
    let soma = lista.filter(val => val % 2 === 0).reduce((a, b) => a + b, 0);
    console.log(`Sequência ${i + 1} - SOMA dos pares: ${soma}`);
  });
}


function ler_sequencias(){
    console.log(
        "Digite os números das sequências.",
        "Use 0 para encerrar cada sequência. Digite ENTER vazio para parar."
    );

    let todas = [];
    let atual = [];

    while (true){
        let entrada = prompt();

        if (entrada === ''){
            break;
        }

        numero = parseInt(entrada);

        if (numero === 0){
            if (atual){
                todas.push(atual);
                atual = [];
            }
        }
        else{
            atual.push(numero);
        }
    }

    return todas;
}


function somaPares(sequencias) {
  for (let i = 0; i < sequencias.length; i++) {
    let soma = sequencias[i]
      .filter(num => num % 2 === 0) // pega apenas os pares
      .reduce((acumulador, valor) => acumulador + valor, 0); // soma tudo

    console.log(`Sequência ${i + 1} - Soma dos pares: ${soma}`);
  }
}


console.log("Qual modo deseja usar?");
console.log("1 - Parâmetros fixos (sequencia)");
console.log("2 - Interativo (sequencia2)");
console.log("3 - Interativo Jstônico");
console.log("4 - Entrada livre com ENTER vazio");

let opcao = prompt("Escolha (1/2/3/4): ");

if (opcao === '1'){
    sequencia(4, [3, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 0, 2, 4, 6, 8, 9, 11, 21, 0, 7, 0]);
} else if (opcao === '2'){
    sequencia2(4);
} else if (opcao === '3'){
    sequenciaJS(4);
} else if (opcao === '4'){
    let seqs = ler_sequencias();
    somaPares(seqs);
} else{
    console.log("Opção inválida.");
}
