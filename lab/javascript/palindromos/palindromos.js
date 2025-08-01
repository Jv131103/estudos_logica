function number_is_palinder(number) {
    let qtd_digitos = 0;
    let numeros_a_contar = number;

    // Conta quantos dígitos o número tem
    while (numeros_a_contar > 0) {
        numeros_a_contar = Math.floor(numeros_a_contar / 10);
        qtd_digitos += 1;
    }

    while (qtd_digitos > 1) {
        // Primeiro dígito
        let primeiro = Math.floor(number / (10 ** (qtd_digitos - 1)));
        // Último dígito
        let ultimo = number % 10;

        if (primeiro !== ultimo) {
            return false;
        }

        // Remove o primeiro dígito
        number = number % (10 ** (qtd_digitos - 1));
        // Remove o último dígito
        number = Math.floor(number / 10);
        qtd_digitos -= 2;
    }

    return true;
}

function number_is_palinder_2(number) {
    let str = number.toString();
    let invertido = str.split('').reverse().join('');
    return str === invertido;
}

function eh_palindromo(n) {
    let original = n;
    let invertido = 0;

    while (n > 0) {
        let ultimo_digito = n % 10;
        invertido = invertido * 10 + ultimo_digito;
        n = Math.floor(n / 10);
    }

    return original === invertido;
}

console.log(number_is_palinder(567765));
console.log(number_is_palinder_2(567765));
console.log(eh_palindromo(567765));
