function palindromo1(texto){
    let normalizado = String(texto).toLowerCase().replace(/\s+/g, "");
    return (normalizado === normalizado.split("").reverse().join("")) ? "SIM":"NAO"; 
}

function palindromo2(texto){
    texto = String(texto).toLowerCase().replace(/\s+/g, "");
    let indice_final = texto.length - 1;

    let inverso = "";

    for (let i=indice_final; i > -1; i--){
        inverso += texto[i];
    }

    return (inverso === texto) ? "SIM":"NAO";
}

function palindromo_numerico(numero){
    let original = numero;
    let inverso = 0;

    while (numero > 0){
        let resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero = Math.floor(numero / 10);  // divisão inteira
    }

    return (inverso === original) ? "SIM" : "NAO";
}


console.log(palindromo1("asa"));
console.log(palindromo2("radar"));
console.log(palindromo_numerico(121));
