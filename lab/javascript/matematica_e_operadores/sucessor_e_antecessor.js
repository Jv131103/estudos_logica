function sucessor_e_antecessor(numero){
    let sucessor = numero + 1;
    let antecessor = numero - 1;

    console.log(`Antecessor: ${antecessor}`);
    console.log(`Sucessor: ${sucessor}`);
}


const prompt = require('prompt-sync')();
let numero = Number(prompt());
sucessor_e_antecessor(numero);
