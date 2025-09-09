function frequenciaLetras(texto) {
    texto = texto.toLowerCase();
    let contagem = {};

    for (let char of texto) {
        if (/[a-zá-úç]/i.test(char)) {  // filtra só letras (aceita acentos simples também)
            contagem[char] = (contagem[char] || 0) + 1;
        }
    }

    let ordenado = Object.keys(contagem).sort();
    for (let letra of ordenado) {
        console.log(`${letra}: ${contagem[letra]}`);
    }
}

frequenciaLetras("Programação em Python!");
