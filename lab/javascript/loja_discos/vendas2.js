function retorna_meses(nome_mes, bissexto){
    const meses30 = [
        "ABRIL",
        "JUNHO",
        "SETEMBRO",
        "NOVEMBRO"
    ]
    const meses31 = [
        "JANEIRO",
        "MARÇO",
        "MAIO",
        "JULHO",
        "AGOSTO",
        "OUTUBRO",
        "DEZEMBRO"
    ]
    const mes_especial = ["FEVEREIRO"]

    if (meses30.includes(nome_mes)){
        return 30;
    } else if (meses31.includes(nome_mes)){
        return 31;
    } else if (mes_especial.includes(nome_mes)){
        if (bissexto){
            return 29;
        }
        return 28;
    }
    console.log("Mês inválido!");
}

function vendas_discos_no_mes(nome_mes, bissexto=false){
    let vendas_dia = [];
    
    nome_mes = nome_mes.toUpperCase()

    // Usando entrada especial do nodejs
    // Caso não tenha faça: npm install prompt-sync
    const prompt = require('prompt-sync')();

    let qtd_dias = retorna_meses(nome_mes, bissexto);
    if (qtd_dias){
        console.log(`VENDAS NO MÊS DE ${nome_mes}`);
        for (let dia=1; dia <= qtd_dias; dia++){
            let vendas = parseInt(
                prompt(`Quantidades de discos vendidos no dia ${dia}: `)
            );
            vendas_dia.push(vendas);
        }

        // Encontrar o maior valor
        let maior_venda = Math.max(...vendas_dia);

        // Encontrar o índice do maior valor
        let dia_maior_venda = vendas_dia.indexOf(maior_venda) + 1;

        console.log(`O dia que mais houve vendas foi no dia ${dia_maior_venda}`,
            `com ${maior_venda} de discos.`
        );
    }
}

vendas_discos_no_mes("FEVEREIRO", bissexto=true)

