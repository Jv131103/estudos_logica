function notas(valor){
    let valores = [100, 50, 20, 10, 5, 2, 1];

    valores.forEach(nota => {
        let qtd = Math.floor(valor / nota);
        console.log(`${qtd} nota(s) de R$ ${nota},00`);
        valor = valor % nota;
    });
}


notas(289);
