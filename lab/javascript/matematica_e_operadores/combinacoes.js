function fatorial_for_linear(n){
    let mult = 1;

    for (let i = n; i > 0; i--){
        mult *= i;
    }

    return mult;
}

function combinacoes(n, k){
    return fatorial_for_linear(n) / (
        fatorial_for_linear(k) * fatorial_for_linear(n - k)
    );
}


console.log(combinacoes(5, 2))
