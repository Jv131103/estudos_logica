function soma(x, y){
    return x + y;
}


function subtracao(x, y){
    return x - y;
}


function multiplicacao(x, y){
    return x * y;
}


function divisao(x, y, type="/"){
    if (y === 0){
        return "Not division 0";
    }
    switch (type){
        case "/":
            return x / y;
        case "%":
            return x % y; 
    }
}

function calculadora(x, op, y){
    let resposta;
    switch (op){
        case "+":
            resposta = soma(x, y);
            break
        case "-":
            resposta = subtracao(x, y);
            break
        case "*":
            resposta = multiplicacao(x, y);
            break
        case "/":
            resposta = divisao(x, y);
            break
        case "%":
            resposta = divisao(x, y, op);
            break
        default:
            throw new Error(
                "Tipo inválido:\nOperador precisa possuir:(+, -, *, /, %)"
            );
    }

    console.log(`${x} ${op} ${y} = ${resposta}`);
}


const prompt = require('prompt-sync')();
console.log("================================================================");
while (true){
    let n1 = Number(prompt().replace(",", "."));
    let op = String(prompt());
    let n2 = Number(prompt().replace(",", "."));
    console.log("----------------------------------------------------------------");
    calculadora(n1, op, n2);
    console.log("================================================================");
}
