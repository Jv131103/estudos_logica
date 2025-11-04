function maior_de_tres(n1, n2, n3){
    let maior = n1;

    if (n2 > maior){
        maior = n2;
    }

    if (n3 > maior){
        maior = n3;
    }

    return maior;
}


let testes = [
    [1, 2, 3],
    [3, 2, 1],
    [1, 3, 2],
    [5, 5, 5],
    [5, 5, 3],
    [-1, -5, -3],
    [10, 10, 11],
]

testes.forEach(teste => {
    let [n1, n2, n3] = teste;

    console.log(`Maior entre ${teste} = ${maior_de_tres(n1, n2, n3)}`);
});
