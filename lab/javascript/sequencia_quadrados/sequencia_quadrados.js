function retornar_quadrados(n){
    return n ** 2;
}

function main(){
    const prompt = require('prompt-sync')();
    while (true){
        try {
            valor = parseInt(prompt("Digite um número: "));
            
            // Verifica se parseInt falhou
            if (isNaN(valor)) {
                throw new Error("Entrada inválida");
            }

            if (valor == 0){
                break;
            }
            let quadrado = retornar_quadrados(valor);
            console.log(`O quadrado de ${valor} é igual a ${quadrado}`);
        } catch (error) {
            console.log("Tipo inválido ... Digite apenas números inteiros")
        }
    }
}

main();
