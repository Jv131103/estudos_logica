function classificacaoEtaria(idade) {
    if (idade < 0) {
        throw new Error("Idade inválida!");
    } else if (idade <= 12) {
        return "Criança";
    } else if (idade <= 17) {
        return "Adolescente";
    } else if (idade <= 59) {
        return "Adulto";
    } else {
        return "Idoso";
    }
}

let testes = [0, 1, 9, 12, 13, 15, 16, 17, 18, 25, 35, 45, 59, 60, 65, 70, 90];
for (let idade of testes) {
    try {
        console.log(classificacaoEtaria(idade));
    } catch (e) {
        console.log(e.message);
    }
}
