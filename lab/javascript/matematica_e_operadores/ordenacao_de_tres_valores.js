function comparacao_direta(a, b, c){
    // encontra menor sem listas e lidando com empates
    let menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    // encontra maior sem listas e lidando com empates
    let maior = a;
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    
    // o do meio é a soma menos (menor + maior)
    let meio = (a + b + c) - (menor + maior);

    console.log(menor, meio, maior);
}


function ordena_tres_swap(a, b, c){
    // versão swap; funciona com empates
    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }
    if (a > c){
        temp = c;
        c = a;
        a = temp;
    }
    if (b > c){
        temp = c;
        c = b;
        b = temp;
    }

    console.log(a, b, c);
}


function ordena_min_max(a, b, c){
    let maior = Math.max(a, b, c);
    let menor = Math.min(a, b, c);
    let meio = (a + b + c) - (menor + maior);

    console.log(menor, meio, maior);
}


function ordena_por_lista(a, b, c){
    [a, b, c] = [a, b, c].sort((a, b) => a - b);
    console.log(a, b, c);
}


function ordena_por_lista2(lista){
    // ordena numericamente
    let ordenada = lista.sort((a, b) => a - b);
    // converte para string só na hora do join
    console.log(ordenada.map(String).join(" "));
}


// Testes rápidos
comparacao_direta(1, 2, 3)
comparacao_direta(1, 3, 2)
comparacao_direta(3, 2, 1)
comparacao_direta(3, 1, 2)
comparacao_direta(2, 3, 1)
comparacao_direta(2, 1, 3)
comparacao_direta(2, 2, 1)  // casos com empate
comparacao_direta(1, 1, 2)
console.log()

ordena_tres_swap(1, 2, 3)
ordena_tres_swap(1, 3, 2)
ordena_tres_swap(3, 2, 1)
ordena_tres_swap(3, 1, 2)
ordena_tres_swap(2, 3, 1)
ordena_tres_swap(2, 1, 3)
ordena_tres_swap(2, 2, 1)  // casos com empate
ordena_tres_swap(1, 1, 2)
console.log()

ordena_min_max(1, 2, 3)
ordena_min_max(1, 3, 2)
ordena_min_max(3, 2, 1)
ordena_min_max(3, 1, 2)
ordena_min_max(2, 3, 1)
ordena_min_max(2, 1, 3)
ordena_min_max(2, 2, 1)  // casos com empate
ordena_min_max(1, 1, 2)
console.log()

ordena_por_lista(1, 2, 3)
ordena_por_lista(1, 3, 2)
ordena_por_lista(3, 2, 1)
ordena_por_lista(3, 1, 2)
ordena_por_lista(2, 3, 1)
ordena_por_lista(2, 1, 3)
ordena_por_lista(2, 2, 1)  // casos com empate
ordena_por_lista(1, 1, 2)
console.log()

ordena_por_lista2([1, 2, 3])
ordena_por_lista2([1, 3, 2])
ordena_por_lista2([3, 2, 1])
ordena_por_lista2([3, 1, 2])
ordena_por_lista2([2, 3, 1])
ordena_por_lista2([2, 1, 3])
ordena_por_lista2([2, 2, 1])  // casos com empate
ordena_por_lista2([1, 1, 2])
console.log()
