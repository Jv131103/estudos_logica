function inverterListaManual(lista) {
    let nova = [];
    for (let i = lista.length - 1; i >= 0; i--) {
        nova.push(lista[i]);
    }
    return nova;
}

function inverterListaSlice(lista) {
    return lista.slice().reverse(); // JS não tem [::-1], mas dá pra usar reverse numa cópia
}

function inverterListaReverse(lista) {
    return [...lista].reverse(); // espalha e usa reverse
}

function inverterListaIndex(lista) {
    let nova = [];
    for (let i = 0; i < lista.length; i++) {
        let idx = lista.length - 1 - i;
        nova.push(lista[idx]);
    }
    return nova;
}

function inverterListaUsandoIndex(lista) {
    let nova = [];
    for (let i = 0; i < lista.length; i++) {
        let valor = lista[lista.length - 1 - i];
        let pos = lista.indexOf(valor); // ineficiente, O(n²)
        nova.push(lista[pos]);
    }
    return nova;
}

// Testes
console.log(inverterListaManual([1, 2, 3, 4, 5]));
console.log(inverterListaManual(['a', 'b', 'c', 'd']));
console.log(inverterListaSlice([1, 2, 3, 4, 5]));
console.log(inverterListaReverse(['a', 'b', 'c', 'd']));
console.log(inverterListaIndex([1, 2, 3, 4, 5]));
console.log(inverterListaUsandoIndex(['a', 'b', 'c', 'd']));
