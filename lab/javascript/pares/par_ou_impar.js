function par_ou_impar(numero){
    if (numero % 2 === 0){
        return "PAR";
    }
    else{
        return "ÍMPAR";
    }
}


function par_ou_impar2(numero){
    return (numero % 2 === 0) ? "PAR" : "IMPAR";  // Ternário em JS
}


console.log(par_ou_impar(2));
console.log(par_ou_impar(3));
console.log(par_ou_impar(-4));
console.log(par_ou_impar2(2));
console.log(par_ou_impar2(3));
console.log(par_ou_impar2(-4));
