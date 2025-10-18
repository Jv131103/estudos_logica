function matriz_identidade(n){
    for (let linha=0; linha < n; linha++){
        for (let coluna=0; coluna < n; coluna++){
            if (linha === coluna){
                process.stdout.write(1 + " ");
            } else{
                process.stdout.write(0 + " ");
            }
        }
        console.log();
    }
}


function matriz_identidade1(n){
    const matriz = [];

    for (let i=0; i < n; i++){
        const linha = [];
        for (let j = 0; j < n; j++){
            linha.push(i === j ? 1 : 0);
        }
        matriz.push(linha);
    }

    // Imprime a matriz
    for (const linha of matriz) {
        console.log(...linha);
    }
}


function matriz_identidade2(n){
    const matriz = [];

    for (let i=0; i < n; i++){
        // cria um vetor de n zeros
        let linha = Array(n).fill(0);
        linha[i] = 1; // define o 1 na diagonal
        matriz.push(linha);
    }

    // imprime os elementos da diagonal (opcional)
    for (const linha of matriz) {
        console.log(...linha);
    }
}


function matriz_identidade3(n) {
  for (let i = 0; i < n; i++) {
    const linha = Array.from({ length: n }, (_, x) => (x === i ? 1 : 0));
    console.log(...linha);
  }
}


function matriz_identidade4(n){
    for (let i=0; i < n; i++){
        for (let j=0; j < n; j ++){
            if (i === j){
                process.stdout.write(1 + " ");
            } else{
                process.stdout.write(0 + " ");
            }
        }
        console.log();
    }
}


matriz_identidade(3);
console.log();
matriz_identidade1(3);
console.log();
matriz_identidade2(3)
console.log();
matriz_identidade3(3);
console.log();
matriz_identidade4(3);
