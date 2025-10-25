function gerarAleatorios(N, A, B, semente = 1) {
    // Parâmetros do gerador linear congruente
    const a = 1664525;
    const c = 1013904223;
    const m = 2 ** 32;

    let x = semente;
    const numeros = [];

    for (let i = 0; i < N; i++) {
        // Fórmula: X_{n+1} = (a*X_n + c) mod m
        x = (a * x + c) % m;

        // Ajusta o valor para o intervalo [A, B]
        const valor = A + (x % (B - A + 1));
        numeros.push(valor);
    }

    return numeros;
}

// Exemplo de uso:
console.log(gerarAleatorios(5, 1, 10, 7));
