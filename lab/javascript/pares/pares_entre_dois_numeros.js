function pares_entre_dois_numeros(m, n){
    let bestVal = -1 / 0;  // Number.NEGATIVE_INFINITY; // -Infinity;
    let bestX = 0;
    let bestY = 0;

    for(let x=0; x < m; x++){
        for (let y=0; y < n; y++){
            let E = x * y - x * x + y;

            if (E > bestVal){
                bestVal = E;
                bestX = x;
                bestY = y;
            }
        }
    }

    console.log(bestX, bestY, bestVal);
}


pares_entre_dois_numeros(2, 4);
