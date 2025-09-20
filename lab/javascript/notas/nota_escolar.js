function nota_escolar(nota){
    if (nota >= 6){
        return "Aprovado";
    } else if (nota >= 4){
        return "Recuperação";
    } else{
        return "Reprovado";
    }
}


notas = [10, 7, 6.6, 6, 5.2, 5, 4.8, 4, 3, 3.7, 1, 0];
notas.forEach(nota => {
    console.log(nota_escolar(nota));
});
