function somarListas(l1, l2) {
    if (l1.length !== l2.length) {
        throw new Error("As listas precisam ter o mesmo tamanho!");
    }

    let l3 = [];
    for (let i = 0; i < l1.length; i++) {
        l3.push(l1[i] + l2[i]);
    }
    return l3;
}

function somarListas2(l1, l2) {
    if (l1.length !== l2.length) {
        throw new Error("As listas precisam ter o mesmo tamanho!");
    }

    return l1.map((x, i) => x + l2[i]); // versão curta com map
}

function somarListasCompleto(l1, l2) {
    if (!l1.length || !l2.length) {
        throw new Error("As listas não podem ser vazias!");
    }

    let l3 = [];
    let ultimo = [];
    let maior_indice = 0;

    if (l1.length === l2.length) {
        maior_indice = l1.length;
    } else if (l1.length > l2.length) {
        maior_indice = l2.length;
        ultimo = l1.slice(maior_indice);
    } else {
        maior_indice = l1.length;
        ultimo = l2.slice(maior_indice);
    }

    for (let i = 0; i < maior_indice; i++) {
        l3.push(l1[i] + l2[i]);
    }
    if (ultimo.length > 0) {
        l3.push(...ultimo);
    }
    return l3;
}

function somarListasCompleto2(l1, l2) {
    if (!l1.length || !l2.length) {
        throw new Error("As listas não podem ser vazias!");
    }

    let min_len = Math.min(l1.length, l2.length);
    let soma = [];
    for (let i = 0; i < min_len; i++) {
        soma.push(l1[i] + l2[i]);
    }
    soma.push(...l1.slice(min_len));
    soma.push(...l2.slice(min_len));
    return soma;
}

// Testes
console.log(somarListas([1, 2, 3, 4], [10, 20, 30, 40]));
console.log(somarListas2([1, 2, 3, 4], [10, 20, 30, 40]));
console.log(somarListasCompleto([1, 2, 3, 4], [10, 20, 30, 40]));
console.log(somarListasCompleto([1, 2, 3, 4], [10, 20, 30]));
console.log(somarListasCompleto([1, 2, 3], [10, 20, 30, 40]));
console.log(somarListasCompleto([1, 2], [10, 20, 30, 40]));
console.log(somarListasCompleto([1, 2, 3, 4], [30, 40]));
