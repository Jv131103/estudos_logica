function conceito(nota) {
    if (nota < 0 || nota > 10) {
        throw new Error("Nota inválida");
    }

    if (nota >= 9) {
        return "A";
    } else if (nota >= 7) {
        return "B";
    } else if (nota >= 5) {
        return "C";
    } else {
        return "D";
    }
}

let notas = [10, 9.95, 9, 8, 8.2, 7, 6.99, 7.35, 5.97, 5, 6, 4, 3, 2, 1, 0];

for (let nota of notas) {
    try {
        console.log(`${nota} -> ${conceito(nota)}`);
    } catch (e) {
        console.log(`${nota} -> ${e.message}`);
    }
}
