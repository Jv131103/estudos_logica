function soma_10_primeiros(){
    let soma = 0;
    for (let i=0; i <= 10; i++){
        soma += i;
    }
    return soma;
}

function soma_10_primeiros_modelo_gaus(){
    let soma = (11 / 2) * (0 + 10);
    return soma;
}

// window.modelo1 = soma_10_primeiros;
// window.modelo1 = soma_10_primeiros_modelo_gaus;

soma1 = soma_10_primeiros()
console.log(soma1)

soma2 = soma_10_primeiros_modelo_gaus()
console.log(soma2)
