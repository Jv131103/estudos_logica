function is_prime(numero){
    if (numero == 0 || numero == 1){
        return false;
    }

    let cont = 0;

    for (let divisor=1; divisor <= numero; divisor++){
        if (numero % divisor == 0){
            cont ++;
        }
    }

    if (cont == 2){
        return true;
    }
    return false;
}


function is_prime_optimize(numero){
    if (numero < 2){ // 0 e 1 não são primos
        return false;
    }
    if (numero == 2){ // 2 é primo
        return true;   
    }
    if (numero % 2 == 0){ // elimina todos os pares > 2
        return false;
    }

    // testa apenas ímpares até a raiz quadrada
    const limite = parseInt(numero**0.5) + 1;
    for (let divisor=3; divisor < limite; divisor+=2){
        if (numero % divisor == 0){
            return false
        }
    }
    return true;
}


function sum_primes(limite=10){
    let soma = 0;
    for (let x=0; x < limite; x++){
        if (is_prime(x)){
            soma += x;
        }
    }
    return soma;
}

function sum_primes2(numeros){
    let soma = 0;

    numeros.forEach(element => {
        if (is_prime_optimize(element)){
            soma += element;
        }
    });

    return soma;
}


function sum_primes3(numeros) {
    return numeros.reduce((soma, x) => soma + (is_prime_optimize(x) ? x : 0), 0);
}


console.log(sum_primes())
console.log(sum_primes2([1, 2, 3, 5, 4, 6, 3]))

let numeros = []
let limite = 20

for (let i=0; i < limite; i++){
    numeros.push(i)
}
console.log(sum_primes3(numeros))
