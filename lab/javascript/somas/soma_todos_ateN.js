function soma_ate_n(n){
    if (n <= 0){
        throw new Error("n deve ser maior que zero");
    }

    let soma = 0;
    
    for (let i=0; i <= n; i++){
        soma += i;
    }

    return soma;
}


function soma_ate_form_direto(n){
    if (n <= 0){
        throw new Error("n deve ser maior que zero");
    }

    return Math.floor(n * (n + 1) / 2);
}


console.log(soma_ate_n(10));
console.log(soma_ate_form_direto(10));
