function verificar_hipotenusa(n){
    /*Essa versão baseia no opróprio limite sendo a hipotenusa*/
    let cateto_oposto = 1;

    while (cateto_oposto <= n){
        let cateto_adjascente = cateto_oposto;

        while (cateto_adjascente <= n){
            let hipotenusa = cateto_oposto**2 + cateto_adjascente**2;
            if (hipotenusa == n**2){
                console.log(
                    `${n} é hipotenusa de`,
                    `(${cateto_oposto}, ${cateto_adjascente})`
                );
            }
            cateto_adjascente += 1;
        }

        cateto_oposto += 1;
    }
}


function verificar_hipotenusas(n){
    /*Essa versão supõe que precisamos encontrar no laço a hipotenusa*/
    for(let h=1; h<=n; h++){  // h é a hipotenusa que estamos testando
        let encontrou = false;

        for (let a=1; a<h; a++){
            for (let b=a; b<h; b++){  // evita repetição espelhada
                if (a**2 + b**2 == h**2){
                    console.log(`${h} é hipotenusa de (${a}, ${b})`);
                    encontrou = true;
                    break;  // achou pelo menos um par, pode parar
                }
            }

            if (encontrou){
                break;
            }
        }
    }
}


verificar_hipotenusa(20);
verificar_hipotenusas(20);
