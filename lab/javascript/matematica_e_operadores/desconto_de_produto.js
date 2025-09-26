function desconto_produto1(valor){
    let decrescimo;
    if (valor >= 100){
        decrescimo = valor - (valor * 0.10);
    } else {
        decrescimo = valor - (valor * 0.05);
    }
    return decrescimo;
}

function desconto_produto2(valor){
    if (valor > 100){
        return valor * 0.9;   // 10% de desconto
    } else{
        return valor * 0.95;  // 5% de desconto
    }
}

function desconto_produto3(valor){
    return valor > 100 ? valor * 0.9 : valor * 0.95;
}


console.log(desconto_produto1(150)); // 135
console.log(desconto_produto2(150)); // 135
console.log(desconto_produto3(150)); // 135
