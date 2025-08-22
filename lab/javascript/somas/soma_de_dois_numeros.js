function soma_de_dois_numeros(m=10, n=10){
    let maior = 0;
    let maiorx = 0;
    let maiory = 0;

    for (let x=0; x < m; x++){
        for (let y=0; y < n; y++){
            let calculo = x * y - x**2 + y;
            if (calculo > maior){
                maior = calculo;
                maiorx = x;
                maiory = y;
            }
        }
    }

    console.log(maiorx, maiory, maior);
}


soma_de_dois_numeros();
