function calculadora_simples(n1, n2, operador){
    if (operador === "+"){
        return n1 + n2;
    } else if (operador === "-"){
        return n1 - n2;
    } else if (operador === "*"){
        return n1 * n2;
    } else if (operador === "**"){
        return n1 ** n2;
    } else if (operador === "/"){
        if (n2 === 0){
            throw new Error("Erro de divisão por 0");
        }
        return n1 / n2;
    } else if (operador === "%"){
        if (n2 === 0){
            throw new Error("Erro de divisão por 0");
        }
        return n1 % n2;
    } else{
        throw new Error("Operador inválido");
    }
}


calculos = [
    [2, 2, '+'],
    [2, 2, '-'],
    [2, 2, '*'],
    [2, 2, '/'],
    [2, 2, '%'],
    [2, 2, '**'],
]


calculos.forEach(calculo => {
   let [n1, n2, op] = calculo;
   console.log(`${n1} ${op} ${n2} = ${calculadora_simples(n1, n2, op)}`); 
});
