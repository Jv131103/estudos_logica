function retornar_binario(numero){
    let lista_restos = [];

    while (numero != 0){
        let temp = numero % 2;
        let resto = temp;
        numero = parseInt(numero /= 2);
        lista_restos.push(resto);
    }

    resultado = "";
    for (let i = lista_restos.length -1; i > -1; i--){
        resultado += String(lista_restos[i]);
    }
    return resultado;
}

console.log(retornar_binario(10))
