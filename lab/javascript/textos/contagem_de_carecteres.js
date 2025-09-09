// Versão 1: usando propriedade length
function contagem1(string) {
    return string.length;
}

// Versão 2: contando manualmente
function contagem2(string) {
    let tam = 0;
    for (let _ of string) {
        tam += 1;
    }
    return tam;
}

// Versão 3: simulando estilo C (parar no '\0')
function contagem3(string) {
    string += "\0"; // adiciona terminador artificial
    let cont = 0;
    while (string[cont] !== "\0") {
        cont++;
    }
    return cont;
}

let entrada = "programação";
console.log(contagem1(entrada));
console.log(contagem2(entrada));
console.log(contagem3(entrada));
