function converter_segundos_em_minutos(segundos){
    return Math.floor(segundos / 60);
}

function converter_segundos(segundos){
    let minutos = Math.floor(segundos / 60);
    let resto = Math.floor(segundos % 60);
    return [minutos, resto];
}


const prompt = require('prompt-sync')();
let entrada = parseInt(prompt());
let [minutos, resto] = converter_segundos(entrada);
console.log(`${minutos} minuto(s) e ${resto} segundo(s)`);

entrada = parseInt(prompt());
saida = converter_segundos_em_minutos(entrada);
console.log(saida);
