function soma_digitos_linear(n){
    n = Math.abs(n);
    let soma = 0;
    while(n > 0){
        soma += n % 10;
        n = Math.floor(n / 10);
    }
    return soma;
}


function versao_alternativa(n){
    n = Math.abs(n);
    return n.toString().split('').reduce((acc, digit) => acc + parseInt(digit), 0);
}

console.log(soma_digitos_linear(1234)); // 10
console.log(soma_digitos_linear(-567)); // 18

console.log(versao_alternativa(1234)); // 10
console.log(versao_alternativa(-567)); // 18
