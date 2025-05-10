function valida_nota(n){
    // Usando entrada especial do nodejs
    // Caso não tenha faça: npm install prompt-sync
    const prompt = require('prompt-sync')();
    let nota = parseFloat(prompt(`Nota do aluno ${n}: `));

    if (isNaN(nota)) { // Verifica se é número
        console.log("Digite apenas números...");
        return null;
    } else if (nota > 100 || nota < 0){
        console.log("Nota inválida, digite de 0 até 100");
        return null;
    }
    return nota;
}

function maior_menor_nota(n){
    let cont = 1;
    let maior = 0;
    let menor = 100;
    let aluno_maior, aluno_menor, nota = 0;

    while (cont <= n){
        nota = valida_nota(cont);
        if (nota !== null){
            if (nota > maior){
                aluno_maior = cont;
                maior = nota;
            }

            if (nota < menor){
                aluno_menor = cont;
                menor = nota;
            }
            cont ++;
        }
    }

    console.log(`A Maior nota foi do aluno ${aluno_maior} com nota ${maior}`);
    console.log(`A Menor nota foi do aluno ${aluno_menor} com nota ${menor}`);
}

maior_menor_nota(10)
