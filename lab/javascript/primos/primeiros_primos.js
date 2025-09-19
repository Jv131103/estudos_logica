function modelo1(limite){
    let contador = 1;
    let impares = 1;
    while (contador <= limite){
        if (impares % 2 != 0){
            console.log(impares);
        }
        impares += 2;
        contador ++;
    }
}


function modelo2(limite){
    let i = 0;
    let impar = 1;

    while (i < limite){
        console.log(impar);
        i ++;
        impar += 2;
    }
}

function main(){
    const prompt = require('prompt-sync')();
    let limite = parseInt(prompt("Defina o limite para ver os ímpares: "));
    modelo1(limite);
    console.log("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++")
    modelo2(limite);
}


main()
