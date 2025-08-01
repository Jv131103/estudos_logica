function imprimir_raizes_que_somam_suas_dezenas(){
    let parte_inteira, resto, raiz;
    for(let i=1000; i < 10000; i++){
        parte_inteira = parseInt(i / 100);
        resto = parseInt(i % 100);
        raiz = parseInt(i**(1/2));
        if (raiz * raiz == i && raiz == parte_inteira + resto){
            console.log(`${i} é um dos números a ser impresso. Raiz: ${parseInt(raiz)}`);
        }
    }

    console.log();
}

function imprimir_raizes_que_somam_suas_dezenas_com_math(){
    let parte_inteira, resto, raiz;
    for(let i=1000; i < 10000; i++){
        parte_inteira = parseInt(i / 100);
        resto = parseInt(i % 100);
        raiz = parseInt(Math.floor(Math.sqrt(i)));
        if (raiz * raiz == i && raiz == parte_inteira + resto){
            console.log(`${i} é um dos números a ser impresso. Raiz: ${parseInt(raiz)}`);
        }
    }

    console.log();
}

function soma_dos_dois_digitos_mais_significativos(numero){
    return parseInt(numero / 100);
}

function soma_dos_dois_digitos_menos_significativos(numero){
    return parseInt(numero % 100);
}

function isqrt(n) {
  return Math.floor(Math.sqrt(n));
}

function imprimir_raizes_especiais(){
    let parte_inteira, raiz;
    for(let i=1000; i < 10000; i++){
        parte_inteira = soma_dos_dois_digitos_mais_significativos(i);
        parte_decimal = soma_dos_dois_digitos_menos_significativos(i);
        raiz = isqrt(i);
        if (raiz * raiz == i && raiz == parte_inteira + parte_decimal){
            console.log(`${i} é um dos números a ser impresso. Raiz: ${parseInt(raiz)}`);
        }
    }
    console.log();
}

imprimir_raizes_que_somam_suas_dezenas();
imprimir_raizes_que_somam_suas_dezenas_com_math();
imprimir_raizes_especiais();
