function versao1(numero, subnumero) {
    return numero.toString().includes(subnumero.toString());
}

function versao2(numero, subnumero) {
    let qtd_digitos = 0;
    let numeros_a_contar = subnumero;

    // Conta quantos dígitos o subnúmero tem
    while (numeros_a_contar > 0) {
        numeros_a_contar = Math.floor(numeros_a_contar / 10);
        qtd_digitos += 1;
    }

    // Enquanto o número ainda tem blocos suficientes para comparar
    while (numero >= 10 ** (qtd_digitos - 1)) {
        // Pega o bloco da direita e compara com o subnúmero
        if (numero % (10 ** qtd_digitos) === subnumero) {
            return true;
        }
        numero = Math.floor(numero / 10); // Remove o último dígito
    }

    return false;
}

console.log(versao1(57238, 23));   // true
console.log(versao1(258347, 23));  // false
console.log(versao2(57238, 23));   // true
console.log(versao2(258347, 23));  // false
