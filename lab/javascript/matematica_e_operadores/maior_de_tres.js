function maior_de_tres(n1, n2, n3){
    if (n1 >= n2 && n1 >= n3){
        return n1;
    } else if (n2 >= n1 && n2 >= n3){
        return n2;
    } else{
        return n3;
    }
}


testes = [[5, 12, 7], [90, 8, 0], [10, 20, 30], [-10, -9, -1], [-0.22, 0, -1]]
testes.forEach(teste => {
    let [a, b, c] = teste;
    console.log(maior_de_tres(a, b, c));
});
