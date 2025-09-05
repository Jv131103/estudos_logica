function par_ou_impar(numero){
    return numero % 2 == 0;
}


const prompt = require('prompt-sync')();
numero = Number(prompt());

if (par_ou_impar(numero)){
    console.log("Par");
} else{
    console.log("Impar");
}
