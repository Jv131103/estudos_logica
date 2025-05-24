function fatorial_for_linear(n){
    let mult = 1;

    for (let i = n; i > 0; i--){
        mult *= i;
    }

    return mult;
}


function fatorial_while_linear(n){
    let mult = 1;
    let cont = n;

    while (cont > 0){
        mult *= cont;
        cont--;
    }

    return mult;
}


function fatorial_recursivo(n){
    if (n == 0){
        return 1
    }

    return n * fatorial_recursivo(n - 1);
}


console.log(fatorial_for_linear(5));
console.log(fatorial_while_linear(5));
console.log(fatorial_recursivo(5));
