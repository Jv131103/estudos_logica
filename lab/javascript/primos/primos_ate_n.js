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


function primos_ate(n){
    for (let divisor=2; divisor <= n; divisor++){
        if (eh_primo(divisor)){
            process.stdout.write(divisor + " ");
        }
    }
    console.log();
}


primos_ate(10)
