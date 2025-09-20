function dia_da_semana(numero){
    if (numero < 1 || numero > 7){
        throw new Error("Número inválido: escolha entre 1 e 7.");
    }

    dias = [
        "Segunda-feira",
        "Terça-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sábado",
        "Domingo"
    ];

    return dias[numero - 1];
}


for (let i=1; i < 8; i++){
    console.log(dia_da_semana(i));
}
