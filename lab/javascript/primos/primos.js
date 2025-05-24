// Método 1 - Força bruta
function is_prime(n) {
    if (n < 2) return false;

    let cont = 0;
    for (let x = 1; x <= n; x++) {
        if (n % x === 0) {
            cont++;
        }
    }

    return cont === 2;
}


// Método 2 - Otimizado pela raiz quadrada
function is_prime2(n) {
    if (n < 2) return false;

    const limite = Math.floor(Math.sqrt(n));

    for (let x = 2; x <= limite; x++) {
        if (n % x === 0) {
            return false;
        }
    }

    return true;
}


// Crivo de Eratóstenes
function crivo_eratostenes(limite) {
    const primos = Array(limite + 1).fill(true);
    primos[0] = primos[1] = false;

    let p = 2;
    while (p * p <= limite) {
        if (primos[p]) {
            for (let i = p * p; i <= limite; i += p) {
                primos[i] = false;
            }
        }
        p++;
    }

    return primos
        .map((ehPrimo, idx) => ehPrimo ? idx : null)
        .filter(num => num !== null);
}


// Método 3 - Usando o Crivo
function is_prime3(n) {
    return crivo_eratostenes(n).includes(n);
}


// Método 4 - Usando while com lógica booleana
function is_prime4(n) {
    if (n < 2) return false;

    let divisor = 2;
    let ehPrimo = true;

    while (divisor < n && ehPrimo) {
        if (n % divisor === 0) {
            ehPrimo = false;
        }
        divisor++;
    }

    return ehPrimo;
}



console.log(is_prime(7));
console.log(is_prime(4));

console.log(is_prime2(7));
console.log(is_prime2(4));

console.log(is_prime3(7));
console.log(is_prime3(4));

console.log(is_prime4(7));
console.log(is_prime4(4));