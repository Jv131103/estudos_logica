const senha_armazenada = "1234";
const prompt = require('prompt-sync')();


function verificarSenha(senha) {
    return senha === senha_armazenada;
}

function main(){
    const MAX_TENTATIVAS = 3;
    let tentativas = 0;

    while (tentativas < MAX_TENTATIVAS) {
        const senha_usuario = prompt("Digite a senha: ");
        if (verificarSenha(senha_usuario)) {
            console.log("Acesso concedido.");
            break;
        }
        console.log("Senha incorreta. Tente novamente.");
        tentativas++;
    }
    if (tentativas === MAX_TENTATIVAS) {
        console.log("Número máximo de tentativas atingido. Acesso bloqueado.");
    }
}

main();
