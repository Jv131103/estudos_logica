function nPrimeirosFibonacci(n) {
    if (n === 0) return [];
    if (n === 1) return [0];

    let n1 = 0, n2 = 1;
    let lista = [n1, n2];

    for (let i = 2; i < n; i++) {
        let prox = n1 + n2;
        lista.push(prox);
        n1 = n2;
        n2 = prox;
    }

    return lista;
}

let testes = [1, 2, 5, 10];

for (let teste of testes) {
    console.log(nPrimeirosFibonacci(teste));
}
