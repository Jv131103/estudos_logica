function serie_harmonica(sinfonia){
    let soma = 1;

    for (let i=2; i <= sinfonia; i++){
        soma += 1/i;
    }

    return soma;
}

console.log(serie_harmonica(5));
