function congruentes(n, j, m){
    let alvo = j % m;  // resto desejado
    let contador = 0;
    let numero = 0;

    while (contador < n){
        if (numero % m == alvo){
            console.log(numero);
            contador ++;
        }
        numero ++;
    }
}

congruentes(5, 35, 39)
