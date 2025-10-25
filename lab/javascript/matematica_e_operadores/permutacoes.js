function fatorial(n){
    let m = 1;
    for (let i=n; i > 0; i--){
        m *= i;
    }
    return m;
}

function permutacao(n){
    return fatorial(n);
}

function permutacao_parcial(n, k){
    return Math.floor(fatorial(n) / fatorial(n - k));
}

console.log(permutacao(4));
console.log(permutacao_parcial(5, 3));
