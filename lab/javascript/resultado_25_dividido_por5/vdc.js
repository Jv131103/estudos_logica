function isNot0(n2){
    return n2 != 0;
}


function retornar_divisao(n1, n2){
    if (isNot0(n2)){
        return n1 / n2
    }
    throw new Error("ERRO de divisão por 0!")

}

console.log(retornar_divisao(25, 5))  // Deve retornar 5
console.log(retornar_divisao(25, 0))
