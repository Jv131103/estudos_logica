function retornar_soma_linear(lista){
    let soma = 0;
    for (let i=0; i < lista.length; i++){
        soma += lista[i];
    }
    return soma;
}


function retornar_soma_pa(lista){
    return (parseInt(lista.length) / 2) * (lista[0] + lista[lista.length - 1]);
}


function soma_recursiva(lista, i=0){
    if (i == lista.length){
        return 0;
    }
    return lista[i] + soma_recursiva(lista, i+1);
}


let numeros = [10, 20, 30, 40];
console.log("Algoritmo Linear:", retornar_soma_linear(numeros));
console.log("Algoritmo de Gauss:", retornar_soma_pa(numeros));
console.log("Algoritmo recursivo linear:", soma_recursiva(numeros));
