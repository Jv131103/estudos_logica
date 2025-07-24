function retornar_decimal(binario){
    binario = String(binario);

    let tamanho = binario.length - 1;

    let soma_decimal = 0;
    let indice = 0;

    for(let potencia=tamanho; potencia > 0; potencia--){
        soma_decimal += Number(binario[indice]) * 2**potencia;
        indice ++;
    }
    return soma_decimal;
}


console.log(retornar_decimal("10010"))
