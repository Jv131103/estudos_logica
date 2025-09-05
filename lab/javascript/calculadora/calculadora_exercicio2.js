const prompt = require("prompt-sync")();

while (true) {
    let entrada = prompt("Digite dois números (ou '!' para sair): ").replace(",", ".");
    let [n1, n2] = entrada.split(" ");

    if (n1 === "!" || n2 === "!") {
        break;
    }

    try {
        n1 = parseFloat(n1);
        n2 = parseFloat(n2);

        if (isNaN(n1) || isNaN(n2)) {
            throw new Error("Inválido, digite apenas números");
        }

        let soma = n1 + n2;
        let subtracao = n1 - n2;
        let multiplicacao = n1 * n2;
        let divisao = (n2 !== 0) ? n1 / n2 : "Division Error";

        console.log(
            `Soma: ${soma}\n` +
            `Subtração: ${subtracao}\n` +
            `Multiplicação: ${multiplicacao}\n` +
            `Divisão: ${divisao}`
        );
    } catch (err) {
        console.log(err.message);
    }
}
