function torreHanoi(n, origem, destino, auxiliar) {
    if (n === 1) {
        console.log(`Mova disco de ${origem} para ${destino}`);
    } else {
        torreHanoi(n - 1, origem, auxiliar, destino);
        console.log(`Mova disco de ${origem} para ${destino}`);
        torreHanoi(n - 1, auxiliar, destino, origem);
    }
}

// Exemplo: 3 discos da torre A para C, usando B como auxiliar
torreHanoi(3, "A", "C", "B");
