function is_number_armstrong(number){
    let temp_calc = number;
    const lista = [];

    while (temp_calc != 0){
        let resto = temp_calc % 10;
        lista.push(resto);
        temp_calc = Math.floor(temp_calc / 10);
    }

    let soma_pot = 0;
    let expoente = lista.length;
    for (const valor of lista){
        soma_pot += Math.pow(valor, expoente);
    }

    if (soma_pot === number){
        return "Armstrong";
    }
    return "Not Armstrong";
}


function is_armstrong(number){
    let digits = String(number);

    let n = digits.length;

    
    // Soma das potências dos dígitos
    let soma = digits
        .split('')                     // separa cada dígito
        .map(d => Math.pow(Number(d), n))  // eleva à potência n
        .reduce((a, b) => a + b, 0);       // soma tudo

    return soma === number ? "Armstrong" : "Not Armstrong";
}

console.log(is_number_armstrong(153));
console.log(is_number_armstrong(9474));
console.log(is_armstrong(153));
console.log(is_armstrong(9474));
