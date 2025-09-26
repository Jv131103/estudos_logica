function soma_ate_N(n) {
    let soma = 0;
    for (let i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

console.log(soma_ate_N(5));
