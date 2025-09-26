function contagem1(inicio, fim, passo) {
    let lista = [];
    while (inicio <= fim) {
        lista.push(inicio);
        inicio += passo;
    }
    lista.push("FIM!");
    console.log(lista.join(" "));
}


function contagem2(inicio, fim, passo) {
    let lista = [];
    for (let i = inicio; i <= fim; i += passo) {
        lista.push(i);
    }
    lista.push("FIM!");
    console.log(lista.join(" "));
}


function contagem_for(N){
    let lista = [];
    for (let i = 1; i <= N; i++) {
        lista.push(i);
    }
    return lista;
}


function contagem_while(N){
    let lista = [];
    let i = 1;
    while (i <= N) {
        lista.push(i);
        i++;
    }
    return lista;
}


function contagem_do_while(N){
    let lista = [];
    let i = 1;
    do {
        lista.push(i);
        i++;
    } while (i <= N);
    return lista;
}

function contagem_simples(N, loop='for'){
    loop = loop.toLowerCase();
    switch(loop){
        case 'for':
            retorno = contagem_for(N);
            break;
        case 'while':
            retorno = contagem_while(N);
            break;
        case 'do-while':
        case 'dowhile':
            retorno = contagem_do_while(N);
            break;
        default:
            retorno = "Loop inválido! Use 'for', 'while' ou 'do-while'.";
            console.log(retorno);
            console.log("FIM!");
            return;
    }
    retorno.push("FIM!");
    console.log(retorno.join(" "));
}

function contagem_simples2(N, loop='for'){
    let functions = {
        'for': contagem_for,
        'while': contagem_while,
        'do-while': contagem_do_while,
        'dowhile': contagem_do_while
    }

    if (functions[loop]){
        let retorno = functions[loop](N);
        retorno.push("FIM!");
        console.log(retorno.join(" "));
    } else {
        console.log("Loop inválido! Use 'for', 'while' ou 'do-while'.");
        console.log("FIM!");
    }
}

contagem1(1, 10, 1);
contagem2(1, 10, 1);

contagem_simples(5, "for")
contagem_simples(5, "while")
contagem_simples(5, "dowhile")

contagem_simples2(5, "for")
contagem_simples2(5, "while")
contagem_simples2(5, "do-while")
