function positive_or_negative(numero){
    if (numero === 0){
        return "Zero";
    } else if (numero > 0){
        return "Positivo";
    } else {
        return "Negativo";
    }
}


//testes
array = [-8, 0, 10, -3.14, 2.7];
array.forEach(element => {
    console.log(`${element}: ${positive_or_negative(element)}`);
});
