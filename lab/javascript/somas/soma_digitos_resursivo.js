function soma_digitos_recursivo(n) {
    n = Math.abs(n); // Garantir que n é positivo
    if (n == 0){
        return 0;
    }
    return (n % 10) + soma_digitos_recursivo(Math.floor(n / 10));
}

console.log(soma_digitos_recursivo(1234)); // 10
console.log(soma_digitos_recursivo(-567)); // 18
