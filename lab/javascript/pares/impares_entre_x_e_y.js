function impares_entre_x_e_y(x, y){
    let array = [];

    if (x > y){
        return "X deve ser menor ou igual a Y";
    }

    if (x < 0 || y < 0){
        return "X e Y devem ser maiores ou iguais a 0";
    }

    for (let i=x; i <= y; i++){
        if (i % 2 != 0){
            array.push(i);
        }
    }

    if (array.length === 0){
        return "Nenhum número ímpar encontrado";
    }

    return array.join(" ");
}

function impares_entre_x_e_y_comprimido(x, y){
    if (x > y) return { error: "X deve ser menor ou igual a Y" };
    if (x < 0 || y < 0) return { error: "X e Y devem ser maiores ou iguais a 0" };

    const impares = [];
    for (let i = x; i <= y; i++) if (i % 2 !== 0) impares.push(i);

    if (impares.length === 0) return "Nenhum número ímpar encontrado";
    return impares.join(" ");
}


console.log(impares_entre_x_e_y(3, 9));
console.log(impares_entre_x_e_y(4, 10));
console.log(impares_entre_x_e_y(1, 5));
console.log(impares_entre_x_e_y(4, 4));
console.log(impares_entre_x_e_y(3, 11));
console.log();
console.log(impares_entre_x_e_y_comprimido(3, 9));
console.log(impares_entre_x_e_y_comprimido(4, 10));
console.log(impares_entre_x_e_y_comprimido(1, 5));
console.log(impares_entre_x_e_y_comprimido(4, 4));
console.log(impares_entre_x_e_y_comprimido(3, 11));
