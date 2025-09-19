function parImparDivisivel3(numero) {
    // tenta converter para inteiro
    numero = Number(numero);

    if (isNaN(numero) || !Number.isInteger(numero)) {
        return "Entrada inválida";
    }

    if (numero % 2 === 0) {
        return "Par";
    } else if (numero % 3 === 0) {
        return "Ímpar e divisível por 3";
    } else {
        return "Ímpar";
    }
}

// Testes
let numeros = [2, 9, 5, "Ola"];
for (let numero of numeros) {
    console.log(parImparDivisivel3(numero));
}
