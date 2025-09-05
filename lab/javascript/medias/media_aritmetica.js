console.log("Digite as 3 notas no seguinte formato: x y z")
const prompt = require('prompt-sync')();

try{
    let [n1, n2, n3] = prompt().split(" ").map(Number);
    media = (n1 + n2 + n3) / 3;
    console.log(`Média: ${media.toFixed(1)}`);
} catch (err) {
    console.log("Valor inválido! As notas precisam ser do tipo Numérico");
}
