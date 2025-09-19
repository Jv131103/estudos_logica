function eh_triangulo(a, b, c){
    if (a < b + c && b < a + c && c < a + b){
        return "Válido";
    }
    return "Inválido";
}


console.log(eh_triangulo(3, 4, 5))
console.log(eh_triangulo(1, 2, 3))
console.log(eh_triangulo(10, 2, 7))
