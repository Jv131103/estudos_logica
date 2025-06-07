function eh_numero_perfeito(){
    const prompt = require('prompt-sync')();
    let n = parseInt(prompt("DIGITE O VALOR DE N: "));
    let soma = 0;

    for (let i = 1; i < n; i++){
        if (n % i == 0){
            soma += i;
        }
    }

    if (soma === n) {
        return true;
    }
    return false;
}


console.log(eh_numero_perfeito());
