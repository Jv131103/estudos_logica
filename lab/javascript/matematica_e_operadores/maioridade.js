function maioridade(idade){
    if (idade < 0){
        throw new Error("Idade inválida");
    }
    return idade >= 18 ? "Maior de idade" : "Menor de idade";
}


// Testes
let lista = [0, 5, 17, 18, 20, 99];
for (let i=0; i < lista.length; i++){
    console.log(`${lista[i]}: ${maioridade(lista[i])}`);
}

