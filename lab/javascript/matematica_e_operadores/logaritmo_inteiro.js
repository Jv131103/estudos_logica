function log_n(n, b){
    let contador = 0;
    let potencia = 1;

    while (potencia * b <= n){
        potencia = potencia * b;
        contador += 1;
    }

    return contador;
}


console.log(log_n(16, 2));
