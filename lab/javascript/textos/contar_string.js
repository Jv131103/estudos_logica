function contarPalavras(texto) {
    // Normaliza: deixa em minúsculas e divide por espaço
    let palavras = texto.toLowerCase().split(/\s+/);

    let freq = {};

    for (let palavra of palavras) {
        if (/^[a-zá-ú]+$/i.test(palavra)) { // só letras
            freq[palavra] = (freq[palavra] || 0) + 1;
        }
    }

    // Converte para array de [palavra, contagem] e ordena
    let ordenado = Object.entries(freq).sort((a, b) => b[1] - a[1]);

    // Exibe
    for (let [palavra, qtd] of ordenado) {
        console.log(`${palavra}: ${qtd}`);
    }
}


function contarPalavras2(texto) {
    // deixa tudo minúsculo e separa por espaço
    let palavras = texto.toLowerCase().split(" ");
    let mapa = {};

    // conta ocorrências
    for (let palavra of palavras) {
        if (/^[a-záéíóúãõâêîôûç]+$/i.test(palavra)) { // só letras
            mapa[palavra] = (mapa[palavra] || 0) + 1;
        }
    }

    // transforma em lista de [palavra, freq]
    let lista = Object.entries(mapa);

    // selection sort pela frequência (decrescente)
    for (let i = 0; i < lista.length; i++) {
        let maxIdx = i;
        for (let j = i + 1; j < lista.length; j++) {
            if (lista[j][1] > lista[maxIdx][1]) {
                maxIdx = j;
            }
        }
        // swap
        [lista[i], lista[maxIdx]] = [lista[maxIdx], lista[i]];
    }

    // imprime resultado
    for (let [palavra, freq] of lista) {
        console.log(`${palavra}: ${freq}`);
    }
}


// Exemplo
contarPalavras("hoje é dia de estudar estudar estudar python python");
console.log("----");
contarPalavras2("hoje é dia de estudar estudar estudar python python");
