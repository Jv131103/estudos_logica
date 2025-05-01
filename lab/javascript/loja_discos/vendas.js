function retorna_meses(){
    return {
        "JANEIRO": 31,
        "FEVEREIRO": 28,
        "MARÇO": 31,
        "ABRIL": 30,
        "MAIO": 31,
        "JUNHO": 30,
        "JULHO": 31,
        "AGOSTO": 31,
        "SETEMBRO": 30,
        "OUTUBRO": 31,
        "NOVEMBRO": 30,
        "DEZEMBRO": 31
    }
}

function retorna_bissexto(nome_mes, bissexto, meses){
    if (nome_mes === "FEVEREIRO" && bissexto){
        meses["FEVEREIRO"] = 29;
    }
    return meses;
}


function vendas_no_mes(nome_mes, bissexto=false){

    nome_mes = nome_mes.toUpperCase()

    // Usando entrada especial do nodejs
    // Caso não tenha faça: npm install prompt-sync
    const prompt = require('prompt-sync')();

    let meses = retorna_meses()
    meses = retorna_bissexto(nome_mes, bissexto, meses)

    if (nome_mes in meses){
        let dia_do_mes = 1;
        let maior_venda = 0;
        let dia_maior_venda = 0;
        
        while (dia_do_mes <= meses[nome_mes]){
            let vendas = parseInt(
                prompt(`Quantidades de discos vendidos no dia ${dia_do_mes}: `)
            );

            if (vendas > maior_venda){
                maior_venda = vendas;
                dia_maior_venda = dia_do_mes;
            }
            dia_do_mes++;
        }

        console.log(`O dia que mais houve vendas foi no dia ${dia_maior_venda}`,
            `com ${maior_venda} de discos.`
        );

    } else {
        console.log("Mês inválido!");
    }
}

vendas_no_mes("Janeiro");
