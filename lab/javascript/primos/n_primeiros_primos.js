function eh_primo(n){
    if (n < 2){
        return false;
    }

    for (let x=2; x < parseInt(n**0.5) + 1; x++){
        if (n % x == 0){
            return false;
        }
    }
    return true;
}


function n_primeiros_primos(n){
    let contador = 0;

    let candidato = 2;

    while (contador < n){
        if (eh_primo(candidato)){
            process.stdout.write(candidato + " ");
            contador ++;
        }

        candidato ++;
    }
    console.log();
}


n_primeiros_primos(10);
