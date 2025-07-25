function ordem_crescente1(a, b, c){
    lista = [a, b, c].sort((x, y) => x - y);
    console.log(lista.join(" "));
}

function ordem_crescente2(a, b, c){
    let maior = Math.max(a, b, c);
    let menor = Math.min(a, b, c);
    let intermediario = (a + b + c) - menor - maior;
    console.log(menor, intermediario, maior);
}

function ordem_crescente3(a, b, c){
    let lista = [a, b, c];
    let maior = lista[0];
    let menor = lista[0];
    lista.forEach(element => {
        if (element > maior) {
            maior = element;
        }

        if (element < menor) {
            menor = element;
        }
    });
    let meio = (a + b + c) - menor - maior;
    console.log(menor, meio, maior);
}

function ordem_crescente4(a, b, c){
    let [x, y, z] = [a, b, c].sort((m, n) => m - n);
    console.log(x, y, z);
}

function ordem_crescente5(a, b, c){
    if (a <= b && a <= c){
        if (b <= c){
            console.log(a, b, c);
        } else {
            console.log(a, c, b);
        }
    } else if (b <= a && b <= c){
        if (a <= c){
            console.log(b, a, c);
        } else {
            console.log(b, c, a);
        }
    } else{
        if (a <= b){
            console.log(c, a, b);
        } else{
            console.log(c, b, a);
        }
    }
}

function ordem_crescente6(a, b, c){
    if (a > b){
        [a, b] = [b, a];
    }
    if (b > c){
        [b, c] = [c, b];
    }
    if (a > b){
        [a, b] = [b, a];
    }
    console.log(a, b, c);
}


ordem_crescente1(1, 2, 3)
ordem_crescente1(1, 3, 2)
ordem_crescente1(2, 1, 3)
ordem_crescente1(2, 3, 1)
ordem_crescente1(3, 2, 1)
ordem_crescente1(3, 1, 2)
console.log()
ordem_crescente2(1, 2, 3)
ordem_crescente2(1, 3, 2)
ordem_crescente2(2, 1, 3)
ordem_crescente2(2, 3, 1)
ordem_crescente2(3, 2, 1)
ordem_crescente2(3, 1, 2)
console.log()
ordem_crescente3(1, 2, 3)
ordem_crescente3(1, 3, 2)
ordem_crescente3(2, 1, 3)
ordem_crescente3(2, 3, 1)
ordem_crescente3(3, 2, 1)
ordem_crescente3(3, 1, 2)
console.log()
ordem_crescente4(1, 2, 3)
ordem_crescente4(1, 3, 2)
ordem_crescente4(2, 1, 3)
ordem_crescente4(2, 3, 1)
ordem_crescente4(3, 2, 1)
ordem_crescente4(3, 1, 2)
console.log()
ordem_crescente5(1, 2, 3)
ordem_crescente5(1, 3, 2)
ordem_crescente5(2, 1, 3)
ordem_crescente5(2, 3, 1)
ordem_crescente5(3, 2, 1)
ordem_crescente5(3, 1, 2)
console.log()
ordem_crescente6(1, 2, 3)
ordem_crescente6(1, 3, 2)
ordem_crescente6(2, 1, 3)
ordem_crescente6(2, 3, 1)
ordem_crescente6(3, 2, 1)
ordem_crescente6(3, 1, 2)
