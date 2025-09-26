function contagem_regressiva_for(numero){
    let lista = [];
    for(let i = numero; i >= 0; i--){
        lista.push(i);
    }
    return join(lista, ' ');
}


function contagem_regressiva_while(numero){
    let lista = [];
    while(numero >= 0){
        lista.push(numero);
        numero--;
    }
    return join(lista, ' ');
}

function contagem_regressiva_do_while(numero){
    let lista = [];
    do{
        lista.push(numero);
        numero--;
    }while(numero >= 0);
    return join(lista, ' ');
}

function join(lista, separador){
    let resultado = '';
    for(let i = 0; i < lista.length; i++){
        resultado += lista[i];
        if(i < lista.length - 1){
            resultado += separador;
        }
    }
    return resultado;
}

console.log(contagem_regressiva_for(5));
console.log(contagem_regressiva_while(5));
console.log(contagem_regressiva_do_while(5));
